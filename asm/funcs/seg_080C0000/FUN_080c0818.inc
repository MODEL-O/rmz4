@ FUN_080c0818  entry 0x080c0818  size 36
.thumb
.org 0xc0818
FUN_080c0818:
	push {r4, lr}	@ 000c0818 10b5
.org 0xc081a
	adds r4, r0, #0	@ 000c081a 041c
.org 0xc081c
	ldrb r0, [r4, #15]	@ 000c081c e07b
.org 0xc081e
	cmp r0, #0	@ 000c081e 0028
.org 0xc0820
	bne.n 0xc0830	@ 000c0820 06d1
.org 0xc0822
	ldr r1, [pc, #24]	@ 000c0822 0649
.org 0xc0824
	adds r0, r4, #0	@ 000c0824 201c
.org 0xc0826
	bl 0x1cf00	@ 000c0826 5cf76bfb
.org 0xc082a
	ldrb r0, [r4, #15]	@ 000c082a e07b
.org 0xc082c
	adds r0, #1	@ 000c082c 0130
.org 0xc082e
	strb r0, [r4, #15]	@ 000c082e e073
.org 0xc0830
	adds r0, r4, #0	@ 000c0830 201c
.org 0xc0832
	bl 0x1cff0	@ 000c0832 5cf7ddfb
.org 0xc0836
	pop {r4}	@ 000c0836 10bc
.org 0xc0838
	pop {r0}	@ 000c0838 01bc
.org 0xc083a
	bx r0	@ 000c083a 0047
