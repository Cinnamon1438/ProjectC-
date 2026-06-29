-- phpMyAdmin SQL Dump
-- version 4.8.4
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Waktu pembuatan: 31 Okt 2019 pada 01.08
-- Versi server: 10.1.37-MariaDB
-- Versi PHP: 7.3.0

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `db_akademik`
--

-- --------------------------------------------------------

--
-- Struktur dari tabel `tb_dosen`
--

CREATE TABLE `tb_dosen` (
  `id_dosen` int(11) NOT NULL,
  `id_matkul` int(11) NOT NULL,
  `id_dospem` int(11) NOT NULL,
  `id_dosi` int(11) NOT NULL,
  `NID` int(11) NOT NULL,
  `nm_dosen` varchar(30) NOT NULL,
  `jk` enum('Pria','Wanita') NOT NULL,
  `no_hp` int(11) NOT NULL,
  `alamat` text NOT NULL,
  `absen_dosen` varchar(1) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Struktur dari tabel `tb_dosi`
--

CREATE TABLE `tb_dosi` (
  `id_dosi` int(11) NOT NULL,
  `status_dosi` enum('Ya','Tidak') NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Struktur dari tabel `tb_dospem`
--

CREATE TABLE `tb_dospem` (
  `id_dospem` int(11) NOT NULL,
  `id_mhs` int(11) NOT NULL,
  `id_matkul` int(11) NOT NULL,
  `status_dospem` enum('Ya','Tidak') NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Struktur dari tabel `tb_kls`
--

CREATE TABLE `tb_kls` (
  `id_kls` int(11) NOT NULL,
  `id_dosen` int(11) NOT NULL,
  `id_matkul` int(11) NOT NULL,
  `no_kls` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Struktur dari tabel `tb_matkul`
--

CREATE TABLE `tb_matkul` (
  `id_matkul` int(11) NOT NULL,
  `id_dosen` int(11) NOT NULL,
  `id_mhs` int(11) NOT NULL,
  `nm_matkul` varchar(50) NOT NULL,
  `absen_dosen` varchar(1) NOT NULL,
  `absen_mhs` varchar(1) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Struktur dari tabel `tb_mhs`
--

CREATE TABLE `tb_mhs` (
  `id_mhs` int(11) NOT NULL,
  `id_matkul` int(11) NOT NULL,
  `nm_mhs` varchar(30) NOT NULL,
  `NIM` int(11) NOT NULL,
  `kls` varchar(5) NOT NULL,
  `jk` enum('Pria','Wanita') NOT NULL,
  `no_hp` int(11) NOT NULL,
  `alamat` text NOT NULL,
  `absen_mhs` varchar(1) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Indexes for dumped tables
--

--
-- Indeks untuk tabel `tb_dosen`
--
ALTER TABLE `tb_dosen`
  ADD PRIMARY KEY (`id_dosen`),
  ADD KEY `id_matkul` (`id_matkul`,`id_dospem`,`id_dosi`),
  ADD KEY `id_dospem` (`id_dospem`),
  ADD KEY `id_dosi` (`id_dosi`);

--
-- Indeks untuk tabel `tb_dosi`
--
ALTER TABLE `tb_dosi`
  ADD PRIMARY KEY (`id_dosi`),
  ADD UNIQUE KEY `id_dosi_3` (`id_dosi`),
  ADD KEY `id_dosi` (`id_dosi`),
  ADD KEY `id_dosi_2` (`id_dosi`);

--
-- Indeks untuk tabel `tb_dospem`
--
ALTER TABLE `tb_dospem`
  ADD PRIMARY KEY (`id_dospem`),
  ADD KEY `id_mhs` (`id_mhs`,`id_matkul`),
  ADD KEY `id_matkul` (`id_matkul`);

--
-- Indeks untuk tabel `tb_kls`
--
ALTER TABLE `tb_kls`
  ADD PRIMARY KEY (`id_kls`),
  ADD KEY `id_dosen` (`id_dosen`,`id_matkul`),
  ADD KEY `id_matkul` (`id_matkul`);

--
-- Indeks untuk tabel `tb_matkul`
--
ALTER TABLE `tb_matkul`
  ADD PRIMARY KEY (`id_matkul`),
  ADD KEY `id_dosen` (`id_dosen`,`id_mhs`),
  ADD KEY `id_mhs` (`id_mhs`);

--
-- Indeks untuk tabel `tb_mhs`
--
ALTER TABLE `tb_mhs`
  ADD PRIMARY KEY (`id_mhs`),
  ADD KEY `id_matkul` (`id_matkul`);

--
-- AUTO_INCREMENT untuk tabel yang dibuang
--

--
-- AUTO_INCREMENT untuk tabel `tb_dosen`
--
ALTER TABLE `tb_dosen`
  MODIFY `id_dosen` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT untuk tabel `tb_dospem`
--
ALTER TABLE `tb_dospem`
  MODIFY `id_dospem` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT untuk tabel `tb_kls`
--
ALTER TABLE `tb_kls`
  MODIFY `id_kls` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT untuk tabel `tb_matkul`
--
ALTER TABLE `tb_matkul`
  MODIFY `id_matkul` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;

--
-- AUTO_INCREMENT untuk tabel `tb_mhs`
--
ALTER TABLE `tb_mhs`
  MODIFY `id_mhs` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;

--
-- Ketidakleluasaan untuk tabel pelimpahan (Dumped Tables)
--

--
-- Ketidakleluasaan untuk tabel `tb_dosen`
--
ALTER TABLE `tb_dosen`
  ADD CONSTRAINT `tb_dosen_ibfk_1` FOREIGN KEY (`id_dospem`) REFERENCES `tb_dospem` (`id_dospem`),
  ADD CONSTRAINT `tb_dosen_ibfk_2` FOREIGN KEY (`id_dosi`) REFERENCES `tb_dosi` (`id_dosi`),
  ADD CONSTRAINT `tb_dosen_ibfk_3` FOREIGN KEY (`id_matkul`) REFERENCES `tb_matkul` (`id_matkul`);

--
-- Ketidakleluasaan untuk tabel `tb_dospem`
--
ALTER TABLE `tb_dospem`
  ADD CONSTRAINT `tb_dospem_ibfk_1` FOREIGN KEY (`id_mhs`) REFERENCES `tb_mhs` (`id_mhs`),
  ADD CONSTRAINT `tb_dospem_ibfk_2` FOREIGN KEY (`id_matkul`) REFERENCES `tb_matkul` (`id_matkul`);

--
-- Ketidakleluasaan untuk tabel `tb_kls`
--
ALTER TABLE `tb_kls`
  ADD CONSTRAINT `tb_kls_ibfk_1` FOREIGN KEY (`id_dosen`) REFERENCES `tb_dosen` (`id_dosen`),
  ADD CONSTRAINT `tb_kls_ibfk_2` FOREIGN KEY (`id_matkul`) REFERENCES `tb_matkul` (`id_matkul`);

--
-- Ketidakleluasaan untuk tabel `tb_matkul`
--
ALTER TABLE `tb_matkul`
  ADD CONSTRAINT `tb_matkul_ibfk_1` FOREIGN KEY (`id_dosen`) REFERENCES `tb_dosen` (`id_dosen`),
  ADD CONSTRAINT `tb_matkul_ibfk_2` FOREIGN KEY (`id_mhs`) REFERENCES `tb_mhs` (`id_mhs`);

--
-- Ketidakleluasaan untuk tabel `tb_mhs`
--
ALTER TABLE `tb_mhs`
  ADD CONSTRAINT `tb_mhs_ibfk_1` FOREIGN KEY (`id_matkul`) REFERENCES `tb_matkul` (`id_matkul`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
