@ FUN_0802ad78  entry 0x0802ad78  size 30
.thumb
.org 0x2ad78
FUN_0802ad78:
	push {lr}	@ 0002ad78 00b5
.org 0x2ad7a
	ldr r1, [pc, #12]	@ 0002ad7a 0349
.org 0x2ad7c
	ldrb r0, [r1, #2]	@ 0002ad7c 8878
.org 0x2ad7e
	cmp r0, #0	@ 0002ad7e 0028
.org 0x2ad80
	beq.n 0x2ad8c	@ 0002ad80 04d0
.org 0x2ad82
	subs r0, #1	@ 0002ad82 0138
.org 0x2ad84
	strb r0, [r1, #2]	@ 0002ad84 8870
.org 0x2ad86
	b.n 0x2ad96	@ 0002ad86 06e0
.org 0x2ad88
	.byte 0x50,0xed,0x02,0x02	@ 0002ad88 data
.org 0x2ad8c
	ldrb r0, [r1, #1]	@ 0002ad8c 4878
.org 0x2ad8e
	ldrb r2, [r1, #0]	@ 0002ad8e 0a78
.org 0x2ad90
	cmp r0, r2	@ 0002ad90 9042
.org 0x2ad92
	beq.n 0x2ad96	@ 0002ad92 00d0
.org 0x2ad94
	strb r0, [r1, #0]	@ 0002ad94 0870
