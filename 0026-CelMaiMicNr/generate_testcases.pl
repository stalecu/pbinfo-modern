use strict;
use warnings;
use List::Util qw/sum/;
my $N = 2**29 - 1; # Nu stiu de ce orice exponent peste 29 nu merge...
my $M = 2**15 - 1;

open my $fh, '>', 'expected.txt' or die $!;
open my $hf, '>', 'input.txt' or die $!;


sub smallest_number_with_digits {
    my $input_number = shift;
    my @digits = split //, $input_number;

    my @sorted_digits = sort @digits;

    my $leading_zeros = 0;
    while (@sorted_digits && $sorted_digits[0] == 0) {
        shift @sorted_digits;
        $leading_zeros++;
    }
    return '0' if !@sorted_digits;

    splice @sorted_digits, 1, 0, '0' x $leading_zeros;
    my $smallest_number = join('', @sorted_digits);

    return $smallest_number;
}

for my $i (2..$M) {
    my $random = int(1 + rand($N));
    print $hf "$random\n";    
    my $sorted = smallest_number_with_digits($random);
    print $fh "$sorted\n";
}