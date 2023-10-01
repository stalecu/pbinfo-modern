use strict;
use warnings;
use ntheory 'divisor_sum';
my $N = 2**31 - 1;
my $M = 2**15 - 1;

open my $fh, '>', 'expected.txt' or die $!;
open my $hf, '>', 'input.txt' or die $!;
for my $i (1..$M) {
    my $random = int(1 + rand($N));
    print $hf "$random\n";    
    my $sum = divisor_sum($random);
    print $fh "$sum\n";
}