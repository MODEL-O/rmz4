@ FUN_0800560c  entry 0x0800560c  size 48
.thumb
.org 0x560c
FUN_0800560c:
	push {r4, r5, lr}	@ 0000560c 30b5
.org 0x560e
	sub sp, #8	@ 0000560e 82b0
.org 0x5610
	ldr r5, [pc, #40]	@ 00005610 0a4d
.org 0x5612
	movs r4, #0	@ 00005612 0024
.org 0x5614
	strb r4, [r5, #3]	@ 00005614 ec70
.org 0x5616
	ldr r0, [pc, #40]	@ 00005616 0a48
.org 0x5618
	adds r1, r5, r0	@ 00005618 2918
.org 0x561a
	str r4, [sp, #0]	@ 0000561a 0094
.org 0x561c
	ldr r2, [pc, #36]	@ 0000561c 094a
.org 0x561e
	mov r0, sp	@ 0000561e 6846
.org 0x5620
	bl 0x128be0	@ 00005620 23f1defa
.org 0x5624
	str r4, [sp, #4]	@ 00005624 0194
.org 0x5626
	add r0, sp, #4	@ 00005626 01a8
.org 0x5628
	ldr r1, [pc, #28]	@ 00005628 0749
.org 0x562a
	adds r5, r5, r1	@ 0000562a 6d18
.org 0x562c
	ldr r2, [pc, #28]	@ 0000562c 074a
.org 0x562e
	adds r1, r5, #0	@ 0000562e 291c
.org 0x5630
	bl 0x128be4	@ 00005630 23f1d8fa
.org 0x5634
	add sp, #8	@ 00005634 02b0
.org 0x5636
	pop {r4, r5}	@ 00005636 30bc
.org 0x5638
	pop {r0}	@ 00005638 01bc
.org 0x563a
	bx r0	@ 0000563a 0047
