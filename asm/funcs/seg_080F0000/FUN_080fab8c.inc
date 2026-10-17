@ FUN_080fab8c  entry 0x080fab8c  size 206
.thumb
.org 0xfab8c
FUN_080fab8c:
	push {r4, r5, r6, r7, lr}	@ 000fab8c f0b5
.org 0xfab8e
	adds r6, r0, #0	@ 000fab8e 061c
.org 0xfab90
	ldrb r2, [r6, #14]	@ 000fab90 b27b
.org 0xfab92
	cmp r2, #0	@ 000fab92 002a
.org 0xfab94
	bne.n 0xfabc2	@ 000fab94 15d1
.org 0xfab96
	ldrb r1, [r6, #10]	@ 000fab96 b17a
.org 0xfab98
	movs r0, #254	@ 000fab98 fe20
.org 0xfab9a
	ands r0, r1	@ 000fab9a 0840
.org 0xfab9c
	strb r0, [r6, #10]	@ 000fab9c b072
.org 0xfab9e
	ldrb r1, [r6, #11]	@ 000fab9e f17a
.org 0xfaba0
	movs r0, #247	@ 000faba0 f720
.org 0xfaba2
	ands r0, r1	@ 000faba2 0840
.org 0xfaba4
	strb r0, [r6, #11]	@ 000faba4 f072
.org 0xfaba6
	adds r0, r6, #0	@ 000faba6 301c
.org 0xfaba8
	adds r0, #140	@ 000faba8 8c30
.org 0xfabaa
	str r2, [r0, #0]	@ 000fabaa 0260
.org 0xfabac
	adds r0, #4	@ 000fabac 0430
.org 0xfabae
	str r2, [r0, #0]	@ 000fabae 0260
.org 0xfabb0
	adds r0, #4	@ 000fabb0 0430
.org 0xfabb2
	strb r2, [r0, #0]	@ 000fabb2 0270
.org 0xfabb4
	ldrb r1, [r6, #10]	@ 000fabb4 b17a
.org 0xfabb6
	movs r0, #251	@ 000fabb6 fb20
.org 0xfabb8
	ands r0, r1	@ 000fabb8 0840
.org 0xfabba
	strb r0, [r6, #10]	@ 000fabba b072
.org 0xfabbc
	ldrb r0, [r6, #14]	@ 000fabbc b07b
.org 0xfabbe
	adds r0, #1	@ 000fabbe 0130
.org 0xfabc0
	strb r0, [r6, #14]	@ 000fabc0 b073
.org 0xfabc2
	adds r0, r6, #0	@ 000fabc2 301c
.org 0xfabc4
	bl 0x1cff0	@ 000fabc4 22f714fa
.org 0xfabc8
	adds r5, r6, #0	@ 000fabc8 351c
.org 0xfabca
	adds r5, #84	@ 000fabca 5435
.org 0xfabcc
	ldr r7, [pc, #140]	@ 000fabcc 234f
.org 0xfabce
	ldrb r0, [r6, #10]	@ 000fabce b07a
.org 0xfabd0
	movs r4, #16	@ 000fabd0 1024
.org 0xfabd2
	adds r3, r4, #0	@ 000fabd2 231c
.org 0xfabd4
	ands r3, r0	@ 000fabd4 0340
.org 0xfabd6
	lsls r3, r3, #24	@ 000fabd6 1b06
.org 0xfabd8
	lsrs r3, r3, #24	@ 000fabd8 1b0e
.org 0xfabda
	adds r0, r5, #0	@ 000fabda 281c
.org 0xfabdc
	adds r1, r7, #0	@ 000fabdc 391c
.org 0xfabde
	movs r2, #0	@ 000fabde 0022
.org 0xfabe0
	bl 0xd4c8c	@ 000fabe0 daf754f8
.org 0xfabe4
	adds r1, r7, #0	@ 000fabe4 391c
.org 0xfabe6
	adds r1, #28	@ 000fabe6 1c31
.org 0xfabe8
	ldrb r0, [r6, #10]	@ 000fabe8 b07a
.org 0xfabea
	adds r3, r4, #0	@ 000fabea 231c
.org 0xfabec
	ands r3, r0	@ 000fabec 0340
.org 0xfabee
	lsls r3, r3, #24	@ 000fabee 1b06
.org 0xfabf0
	lsrs r3, r3, #24	@ 000fabf0 1b0e
.org 0xfabf2
	adds r0, r5, #0	@ 000fabf2 281c
.org 0xfabf4
	movs r2, #0	@ 000fabf4 0022
.org 0xfabf6
	bl 0xd4c8c	@ 000fabf6 daf749f8
.org 0xfabfa
	adds r1, r7, #0	@ 000fabfa 391c
.org 0xfabfc
	adds r1, #56	@ 000fabfc 3831
.org 0xfabfe
	ldrb r0, [r6, #10]	@ 000fabfe b07a
.org 0xfac00
	adds r3, r4, #0	@ 000fac00 231c
.org 0xfac02
	ands r3, r0	@ 000fac02 0340
.org 0xfac04
	lsls r3, r3, #24	@ 000fac04 1b06
.org 0xfac06
	lsrs r3, r3, #24	@ 000fac06 1b0e
.org 0xfac08
	adds r0, r5, #0	@ 000fac08 281c
.org 0xfac0a
	movs r2, #0	@ 000fac0a 0022
.org 0xfac0c
	bl 0xd4c8c	@ 000fac0c daf73ef8
.org 0xfac10
	adds r1, r7, #0	@ 000fac10 391c
.org 0xfac12
	adds r1, #84	@ 000fac12 5431
.org 0xfac14
	ldrb r0, [r6, #10]	@ 000fac14 b07a
.org 0xfac16
	adds r3, r4, #0	@ 000fac16 231c
.org 0xfac18
	ands r3, r0	@ 000fac18 0340
.org 0xfac1a
	lsls r3, r3, #24	@ 000fac1a 1b06
.org 0xfac1c
	lsrs r3, r3, #24	@ 000fac1c 1b0e
.org 0xfac1e
	adds r0, r5, #0	@ 000fac1e 281c
.org 0xfac20
	movs r2, #0	@ 000fac20 0022
.org 0xfac22
	bl 0xd4c8c	@ 000fac22 daf733f8
.org 0xfac26
	adds r1, r7, #0	@ 000fac26 391c
.org 0xfac28
	adds r1, #112	@ 000fac28 7031
.org 0xfac2a
	ldrb r0, [r6, #10]	@ 000fac2a b07a
.org 0xfac2c
	ands r4, r0	@ 000fac2c 0440
.org 0xfac2e
	lsls r4, r4, #24	@ 000fac2e 2406
.org 0xfac30
	lsrs r4, r4, #24	@ 000fac30 240e
.org 0xfac32
	adds r0, r5, #0	@ 000fac32 281c
.org 0xfac34
	movs r2, #0	@ 000fac34 0022
.org 0xfac36
	adds r3, r4, #0	@ 000fac36 231c
.org 0xfac38
	bl 0xd4c8c	@ 000fac38 daf728f8
.org 0xfac3c
	movs r0, #168	@ 000fac3c a820
.org 0xfac3e
	bl 0x2b10	@ 000fac3e 07f767ff
.org 0xfac42
	ldr r1, [pc, #28]	@ 000fac42 0749
.org 0xfac44
	ldrb r0, [r6, #9]	@ 000fac44 707a
.org 0xfac46
	lsls r0, r0, #2	@ 000fac46 8000
.org 0xfac48
	adds r0, r0, r1	@ 000fac48 4018
.org 0xfac4a
	movs r1, #4	@ 000fac4a 0421
.org 0xfac4c
	str r1, [r6, #12]	@ 000fac4c f160
.org 0xfac4e
	ldr r0, [r0, #0]	@ 000fac4e 0068
.org 0xfac50
	ldr r0, [r0, #16]	@ 000fac50 0069
.org 0xfac52
	str r0, [r6, #20]	@ 000fac52 7061
.org 0xfac54
	pop {r4, r5, r6, r7}	@ 000fac54 f0bc
.org 0xfac56
	pop {r0}	@ 000fac56 01bc
.org 0xfac58
	bx r0	@ 000fac58 0047
