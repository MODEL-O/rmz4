@ FUN_080a896c  entry 0x080a896c  size 58
.thumb
.org 0xa896c
FUN_080a896c:
	push {lr}	@ 000a896c 00b5
.org 0xa896e
	adds r2, r0, #0	@ 000a896e 021c
.org 0xa8970
	ldr r0, [r2, #40]	@ 000a8970 906a
.org 0xa8972
	ldrb r0, [r0, #12]	@ 000a8972 007b
.org 0xa8974
	cmp r0, #1	@ 000a8974 0128
.org 0xa8976
	bls.n 0xa8998	@ 000a8976 0fd9
.org 0xa8978
	ldr r1, [pc, #24]	@ 000a8978 0649
.org 0xa897a
	ldrb r0, [r2, #9]	@ 000a897a 507a
.org 0xa897c
	lsls r0, r0, #2	@ 000a897c 8000
.org 0xa897e
	adds r0, r0, r1	@ 000a897e 4018
.org 0xa8980
	movs r1, #2	@ 000a8980 0221
.org 0xa8982
	str r1, [r2, #12]	@ 000a8982 d160
.org 0xa8984
	ldr r0, [r0, #0]	@ 000a8984 0068
.org 0xa8986
	ldr r0, [r0, #8]	@ 000a8986 8068
.org 0xa8988
	str r0, [r2, #20]	@ 000a8988 5061
.org 0xa898a
	adds r0, r2, #0	@ 000a898a 101c
.org 0xa898c
	bl 0xa89b0	@ 000a898c 00f010f8
.org 0xa8990
	b.n 0xa89a8	@ 000a8990 0ae0
.org 0xa8992
	.byte 0x00	@ 000a8992 data
.org 0xa8993
	.byte 0x00	@ 000a8993 data
.org 0xa8994
	.byte 0x40,0xdb,0x85,0x08	@ 000a8994 data
.org 0xa8998
	ldr r0, [pc, #16]	@ 000a8998 0448
.org 0xa899a
	ldrb r1, [r2, #16]	@ 000a899a 117c
.org 0xa899c
	lsls r1, r1, #2	@ 000a899c 8900
.org 0xa899e
	adds r1, r1, r0	@ 000a899e 0918
.org 0xa89a0
	ldr r1, [r1, #0]	@ 000a89a0 0968
.org 0xa89a2
	adds r0, r2, #0	@ 000a89a2 101c
.org 0xa89a4
	bl 0x128f80	@ 000a89a4 80f0ecfa
