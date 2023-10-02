use strict;
use warnings;
use Math::Prime::Util qw/fordivisors is_prime/;
use List::Util qw/sum/;
my $N = 2**31 - 1;
my $M = 2**15 - 1;

open my $fh, '>', 'expected.txt' or die $!;
open my $hf, '>', 'input.txt' or die $!;
for my $i (2..$M) {
    my $random = int(1 + rand($N));
    print $hf "$random\n";    
    my $sum_of_primes;
    fordivisors { $sum_of_primes += $_ if is_prime($_) } $random;
    print $fh "$sum_of_primes\n";
}