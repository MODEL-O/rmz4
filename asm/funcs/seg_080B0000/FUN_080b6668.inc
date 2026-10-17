@ FUN_080b6668  entry 0x080b6668  size 80
.thumb
.org 0xb6668
FUN_080b6668:
	push {lr}	@ 000b6668 00b5
.org 0xb666a
	adds r2, r0, #0	@ 000b666a 021c
.org 0xb666c
	ldr r3, [r2, #40]	@ 000b666c 936a
.org 0xb666e
	adds r0, #140	@ 000b666e 8c30
.org 0xb6670
	ldr r0, [r0, #0]	@ 000b6670 0068
.org 0xb6672
	movs r1, #128	@ 000b6672 8021
.org 0xb6674
	lsls r1, r1, #2	@ 000b6674 8900
.org 0xb6676
	ands r0, r1	@ 000b6676 0840
.org 0xb6678
	cmp r0, #0	@ 000b6678 0028
.org 0xb667a
	bne.n 0xb6682	@ 000b667a 02d1
.org 0xb667c
	ldrb r0, [r3, #12]	@ 000b667c 187b
.org 0xb667e
	cmp r0, #1	@ 000b667e 0128
.org 0xb6680
	bls.n 0xb66a8	@ 000b6680 12d9
.org 0xb6682
	ldr r1, [pc, #32]	@ 000b6682 0849
.org 0xb6684
	ldrb r0, [r2, #9]	@ 000b6684 507a
.org 0xb6686
	lsls r0, r0, #2	@ 000b6686 8000
.org 0xb6688
	adds r0, r0, r1	@ 000b6688 4018
.org 0xb668a
	movs r1, #2	@ 000b668a 0221
.org 0xb668c
	str r1, [r2, #12]	@ 000b668c d160
.org 0xb668e
	ldr r0, [r0, #0]	@ 000b668e 0068
.org 0xb6690
	ldr r0, [r0, #8]	@ 000b6690 8068
.org 0xb6692
	str r0, [r2, #20]	@ 000b6692 5061
.org 0xb6694
	movs r0, #0	@ 000b6694 0020
.org 0xb6696
	strb r0, [r2, #13]	@ 000b6696 5073
.org 0xb6698
	strb r0, [r2, #14]	@ 000b6698 9073
.org 0xb669a
	strb r0, [r2, #15]	@ 000b669a d073
.org 0xb669c
	adds r0, r2, #0	@ 000b669c 101c
.org 0xb669e
	bl 0xb690c	@ 000b669e 00f035f9
.org 0xb66a2
	b.n 0xb66b8	@ 000b66a2 09e0
.org 0xb66a4
	.byte 0x40,0xdb,0x85,0x08	@ 000b66a4 data
.org 0xb66a8
	ldr r0, [pc, #16]	@ 000b66a8 0448
.org 0xb66aa
	ldrb r1, [r2, #13]	@ 000b66aa 517b
.org 0xb66ac
	lsls r1, r1, #2	@ 000b66ac 8900
.org 0xb66ae
	adds r1, r1, r0	@ 000b66ae 0918
.org 0xb66b0
	ldr r1, [r1, #0]	@ 000b66b0 0968
.org 0xb66b2
	adds r0, r2, #0	@ 000b66b2 101c
.org 0xb66b4
	bl 0x128f80	@ 000b66b4 72f064fc
