<?php
putenv("GNUPGHOME=".dirname(__FILE__) . '/home');
error_reporting (E_ALL);
$fingerprint = "2DF0DD02DC9B70B7F64F572E669E775E0A6284B3";
$passphrase = "blabla";

$plaintext = "foo bar";

$testkey =<<<EOF
-----BEGIN PGP PRIVATE KEY BLOCK-----

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
ngBZTudrwBbKC8xx224aOk0TiDbiWftGtx4=
=py/2
-----END PGP PRIVATE KEY BLOCK-----
EOF;
?>
