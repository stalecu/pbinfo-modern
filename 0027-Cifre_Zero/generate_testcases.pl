use strict;
use warnings;
my $N = 2**31 - 1; 
my $M = 2**15 - 1;

open my $fh, '>', 'expected.txt' or die $!;
open my $hf, '>', 'input.txt' or die $!;

for my $i (2..$M) {
    my $random = int(1 + rand($N));
    print $hf "$random\n";    
    my $zeros = () = "$random" =~ /0/g;
    print $fh "$zeros\n";
}