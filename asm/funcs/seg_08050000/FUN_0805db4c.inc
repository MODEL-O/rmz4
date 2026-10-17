@ FUN_0805db4c  entry 0x0805db4c  size 118
.thumb
.org 0x5db4c
FUN_0805db4c:
	push {lr}	@ 0005db4c 00b5
.org 0x5db4e
	adds r2, r0, #0	@ 0005db4e 021c
.org 0x5db50
	ldr r3, [pc, #84]	@ 0005db50 154b
.org 0x5db52
	ldr r0, [r3, #56]	@ 0005db52 986b
.org 0x5db54
	ldr r1, [r2, #84]	@ 0005db54 516d
.org 0x5db56
	subs r0, r0, r1	@ 0005db56 401a
.org 0x5db58
	movs r1, #200	@ 0005db58 c821
.org 0x5db5a
	lsls r1, r1, #8	@ 0005db5a 0902
.org 0x5db5c
	adds r0, r0, r1	@ 0005db5c 4018
.org 0x5db5e
	movs r1, #200	@ 0005db5e c821
.org 0x5db60
	lsls r1, r1, #9	@ 0005db60 4902
.org 0x5db62
	cmp r0, r1	@ 0005db62 8842
.org 0x5db64
	bhi.n 0x5db7e	@ 0005db64 0bd8
.org 0x5db66
	ldr r0, [r3, #60]	@ 0005db66 d86b
.org 0x5db68
	ldr r1, [r2, #88]	@ 0005db68 916d
.org 0x5db6a
	subs r0, r0, r1	@ 0005db6a 401a
.org 0x5db6c
	movs r3, #176	@ 0005db6c b023
.org 0x5db6e
	lsls r3, r3, #8	@ 0005db6e 1b02
.org 0x5db70
	adds r0, r0, r3	@ 0005db70 c018
.org 0x5db72
	movs r1, #176	@ 0005db72 b021
.org 0x5db74
	lsls r1, r1, #9	@ 0005db74 4902
.org 0x5db76
	adds r3, r2, #0	@ 0005db76 131c
.org 0x5db78
	adds r3, #180	@ 0005db78 b433
.org 0x5db7a
	cmp r0, r1	@ 0005db7a 8842
.org 0x5db7c
	bls.n 0x5db94	@ 0005db7c 0ad9
.org 0x5db7e
	adds r0, r2, #0	@ 0005db7e 101c
.org 0x5db80
	adds r0, #212	@ 0005db80 d430
.org 0x5db82
	ldr r0, [r0, #0]	@ 0005db82 0068
.org 0x5db84
	str r0, [r2, #84]	@ 0005db84 5065
.org 0x5db86
	adds r1, r2, #0	@ 0005db86 111c
.org 0x5db88
	adds r1, #180	@ 0005db88 b431
.org 0x5db8a
	ldr r0, [r1, #0]	@ 0005db8a 0868
.org 0x5db8c
	ldr r3, [pc, #28]	@ 0005db8c 074b
.org 0x5db8e
	adds r0, r0, r3	@ 0005db8e c018
.org 0x5db90
	str r0, [r2, #88]	@ 0005db90 9065
.org 0x5db92
	adds r3, r1, #0	@ 0005db92 0b1c
.org 0x5db94
	ldr r0, [r3, #0]	@ 0005db94 1868
.org 0x5db96
	ldr r1, [pc, #24]	@ 0005db96 0649
.org 0x5db98
	adds r0, r0, r1	@ 0005db98 4018
.org 0x5db9a
	ldr r1, [r2, #88]	@ 0005db9a 916d
.org 0x5db9c
	cmp r1, r0	@ 0005db9c 8142
.org 0x5db9e
	bge.n 0x5dbb4	@ 0005db9e 09da
.org 0x5dba0
	movs r1, #0	@ 0005dba0 0021
.org 0x5dba2
	movs r0, #2	@ 0005dba2 0220
.org 0x5dba4
	b.n 0x5dbb8	@ 0005dba4 08e0
.org 0x5dba6
	.byte 0x00	@ 0005dba6 data
.org 0x5dba7
	.byte 0x00	@ 0005dba7 data
.org 0x5dba8
	.byte 0xf8,0xe9,0x02,0x02	@ 0005dba8 data
.org 0x5dbac
	.byte 0x00,0x50,0xff,0xff	@ 0005dbac data
.org 0x5dbb0
	.byte 0xc0,0x95,0xff,0xff	@ 0005dbb0 data
.org 0x5dbb4
	movs r1, #0	@ 0005dbb4 0021
.org 0x5dbb6
	movs r0, #1	@ 0005dbb6 0120
.org 0x5dbb8
	strb r0, [r2, #14]	@ 0005dbb8 9073
.org 0x5dbba
	strb r1, [r2, #15]	@ 0005dbba d173
.org 0x5dbbc
	ldr r0, [pc, #16]	@ 0005dbbc 0448
.org 0x5dbbe
	ldrb r1, [r2, #14]	@ 0005dbbe 917b
.org 0x5dbc0
	lsls r1, r1, #2	@ 0005dbc0 8900
