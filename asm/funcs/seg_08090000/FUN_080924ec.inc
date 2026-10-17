@ FUN_080924ec  entry 0x080924ec  size 36
.thumb
.org 0x924ec
FUN_080924ec:
	push {r4, r5, r6, r7, lr}	@ 000924ec f0b5
.org 0x924ee
	mov r7, r8	@ 000924ee 4746
.org 0x924f0
	push {r7}	@ 000924f0 80b4
.org 0x924f2
	adds r6, r0, #0	@ 000924f2 061c
.org 0x924f4
	ldrb r0, [r6, #14]	@ 000924f4 b07b
.org 0x924f6
	cmp r0, #4	@ 000924f6 0428
.org 0x924f8
	bls.n 0x924fc	@ 000924f8 00d9
.org 0x924fa
	b.n 0x9266a	@ 000924fa b6e0
.org 0x924fc
	lsls r0, r0, #2	@ 000924fc 8000
.org 0x924fe
	ldr r1, [pc, #8]	@ 000924fe 0249
.org 0x92500
	adds r0, r0, r1	@ 00092500 4018
.org 0x92502
	ldr r0, [r0, #0]	@ 00092502 0068
.org 0x92504
	mov pc, r0	@ 00092504 8746
.org 0x92506
	.byte 0x00	@ 00092506 data
.org 0x92507
	.byte 0x00	@ 00092507 data
.org 0x92508
	.byte 0x0c,0x25,0x09,0x08	@ 00092508 data
.org 0x9250c
	.byte 0x20,0x25,0x09,0x08	@ 0009250c data
