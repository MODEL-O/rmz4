@ FUN_0809f4f8  entry 0x0809f4f8  size 74
.thumb
.org 0x9f4f8
FUN_0809f4f8:
	push {lr}	@ 0009f4f8 00b5
.org 0x9f4fa
	adds r2, r0, #0	@ 0009f4fa 021c
.org 0x9f4fc
	adds r0, #192	@ 0009f4fc c030
.org 0x9f4fe
	ldrb r0, [r0, #0]	@ 0009f4fe 0078
.org 0x9f500
	cmp r0, #0	@ 0009f500 0028
.org 0x9f502
	beq.n 0x9f534	@ 0009f502 17d0
.org 0x9f504
	adds r0, r2, #0	@ 0009f504 101c
.org 0x9f506
	adds r0, #140	@ 0009f506 8c30
.org 0x9f508
	ldr r0, [r0, #0]	@ 0009f508 0068
.org 0x9f50a
	movs r1, #128	@ 0009f50a 8021
.org 0x9f50c
	lsls r1, r1, #2	@ 0009f50c 8900
.org 0x9f50e
	ands r0, r1	@ 0009f50e 0840
.org 0x9f510
	cmp r0, #0	@ 0009f510 0028
.org 0x9f512
	beq.n 0x9f534	@ 0009f512 0fd0
.org 0x9f514
	ldr r1, [pc, #24]	@ 0009f514 0649
.org 0x9f516
	ldrb r0, [r2, #9]	@ 0009f516 507a
.org 0x9f518
	lsls r0, r0, #2	@ 0009f518 8000
.org 0x9f51a
	adds r0, r0, r1	@ 0009f51a 4018
.org 0x9f51c
	movs r1, #2	@ 0009f51c 0221
.org 0x9f51e
	str r1, [r2, #12]	@ 0009f51e d160
.org 0x9f520
	ldr r0, [r0, #0]	@ 0009f520 0068
.org 0x9f522
	ldr r0, [r0, #8]	@ 0009f522 8068
.org 0x9f524
	str r0, [r2, #20]	@ 0009f524 5061
.org 0x9f526
	adds r0, r2, #0	@ 0009f526 101c
.org 0x9f528
	bl 0x9f54c	@ 0009f528 00f010f8
.org 0x9f52c
	b.n 0x9f544	@ 0009f52c 0ae0
.org 0x9f52e
	.byte 0x00	@ 0009f52e data
.org 0x9f52f
	.byte 0x00	@ 0009f52f data
.org 0x9f530
	.byte 0x40,0xdb,0x85,0x08	@ 0009f530 data
.org 0x9f534
	ldr r0, [pc, #16]	@ 0009f534 0448
.org 0x9f536
	ldrb r1, [r2, #16]	@ 0009f536 117c
.org 0x9f538
	lsls r1, r1, #2	@ 0009f538 8900
.org 0x9f53a
	adds r1, r1, r0	@ 0009f53a 0918
.org 0x9f53c
	ldr r1, [r1, #0]	@ 0009f53c 0968
.org 0x9f53e
	adds r0, r2, #0	@ 0009f53e 101c
.org 0x9f540
	bl 0x128f80	@ 0009f540 89f01efd
