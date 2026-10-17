@ FUN_080ad6c8  entry 0x080ad6c8  size 128
.thumb
.org 0xad6c8
FUN_080ad6c8:
	push {r4, r5, r6, lr}	@ 000ad6c8 70b5
.org 0xad6ca
	adds r4, r0, #0	@ 000ad6ca 041c
.org 0xad6cc
	ldr r5, [r4, #40]	@ 000ad6cc a56a
.org 0xad6ce
	ldrb r6, [r4, #17]	@ 000ad6ce 667c
.org 0xad6d0
	ldrb r0, [r5, #12]	@ 000ad6d0 287b
.org 0xad6d2
	cmp r0, #1	@ 000ad6d2 0128
.org 0xad6d4
	bls.n 0xad6f4	@ 000ad6d4 0ed9
.org 0xad6d6
	ldr r1, [pc, #24]	@ 000ad6d6 0649
.org 0xad6d8
	ldrb r0, [r4, #9]	@ 000ad6d8 607a
.org 0xad6da
	lsls r0, r0, #2	@ 000ad6da 8000
.org 0xad6dc
	adds r0, r0, r1	@ 000ad6dc 4018
.org 0xad6de
	movs r1, #2	@ 000ad6de 0221
.org 0xad6e0
	str r1, [r4, #12]	@ 000ad6e0 e160
.org 0xad6e2
	ldr r0, [r0, #0]	@ 000ad6e2 0068
.org 0xad6e4
	ldr r0, [r0, #8]	@ 000ad6e4 8068
.org 0xad6e6
	str r0, [r4, #20]	@ 000ad6e6 6061
.org 0xad6e8
	adds r0, r4, #0	@ 000ad6e8 201c
.org 0xad6ea
	bl 0xad750	@ 000ad6ea 00f031f8
.org 0xad6ee
	b.n 0xad746	@ 000ad6ee 2ae0
.org 0xad6f0
	.byte 0x40,0xdb,0x85,0x08	@ 000ad6f0 data
.org 0xad6f4
	adds r0, r4, #0	@ 000ad6f4 201c
.org 0xad6f6
	bl 0x1cff0	@ 000ad6f6 6ff77bfc
.org 0xad6fa
	adds r1, r5, #0	@ 000ad6fa 291c
.org 0xad6fc
	adds r1, #180	@ 000ad6fc b431
.org 0xad6fe
	lsls r0, r6, #6	@ 000ad6fe b001
.org 0xad700
	ldrb r1, [r1, #0]	@ 000ad700 0978
.org 0xad702
	adds r0, r0, r1	@ 000ad702 4018
.org 0xad704
	lsls r0, r0, #24	@ 000ad704 0006
.org 0xad706
	adds r1, r5, #0	@ 000ad706 291c
.org 0xad708
	adds r1, #184	@ 000ad708 b831
.org 0xad70a
	ldr r2, [r1, #0]	@ 000ad70a 0a68
.org 0xad70c
	ldr r6, [pc, #60]	@ 000ad70c 0f4e
.org 0xad70e
	lsrs r3, r0, #24	@ 000ad70e 030e
.org 0xad710
	movs r1, #128	@ 000ad710 8021
.org 0xad712
	lsls r1, r1, #23	@ 000ad712 c905
.org 0xad714
	adds r0, r0, r1	@ 000ad714 4018
.org 0xad716
	lsrs r0, r0, #23	@ 000ad716 c00d
.org 0xad718
	adds r0, r0, r6	@ 000ad718 8019
.org 0xad71a
	movs r1, #0	@ 000ad71a 0021
.org 0xad71c
	ldrsh r0, [r0, r1]	@ 000ad71c 405e
.org 0xad71e
	muls r0, r2	@ 000ad71e 5043
.org 0xad720
	cmp r0, #0	@ 000ad720 0028
.org 0xad722
	bge.n 0xad726	@ 000ad722 00da
.org 0xad724
	adds r0, #255	@ 000ad724 ff30
.org 0xad726
	asrs r1, r0, #8	@ 000ad726 0112
.org 0xad728
	ldr r0, [r5, #84]	@ 000ad728 686d
.org 0xad72a
	adds r0, r0, r1	@ 000ad72a 4018
.org 0xad72c
	str r0, [r4, #84]	@ 000ad72c 6065
.org 0xad72e
	lsls r0, r3, #1	@ 000ad72e 5800
.org 0xad730
	adds r0, r0, r6	@ 000ad730 8019
.org 0xad732
	movs r1, #0	@ 000ad732 0021
.org 0xad734
	ldrsh r0, [r0, r1]	@ 000ad734 405e
.org 0xad736
	muls r0, r2	@ 000ad736 5043
.org 0xad738
	cmp r0, #0	@ 000ad738 0028
.org 0xad73a
	bge.n 0xad73e	@ 000ad73a 00da
.org 0xad73c
	adds r0, #255	@ 000ad73c ff30
.org 0xad73e
	asrs r1, r0, #8	@ 000ad73e 0112
.org 0xad740
	ldr r0, [r5, #88]	@ 000ad740 a86d
.org 0xad742
	adds r0, r0, r1	@ 000ad742 4018
.org 0xad744
	str r0, [r4, #88]	@ 000ad744 a065
.org 0xad746
	pop {r4, r5, r6}	@ 000ad746 70bc
