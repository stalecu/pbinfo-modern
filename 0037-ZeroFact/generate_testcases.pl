use strict;
use warnings;
use experimental 'say';
my $N = 2**31 - 1;
my $M = 2**15 - 1;

open my $fh, '>', 'expected.txt' or die $!;
open my $hf, '>', 'input.txt' or die $!;

for my $n (2..$M) {
    my $x = int(1 + rand($N));
    say $hf $x;
    my $count = 0;
    $count += int($x /= 5) while $x >= 5;
    say $fh $count;
}