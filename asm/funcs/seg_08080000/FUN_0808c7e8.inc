@ FUN_0808c7e8  entry 0x0808c7e8  size 62
.thumb
.org 0x8c7e8
FUN_0808c7e8:
	push {r4, lr}	@ 0008c7e8 10b5
.org 0x8c7ea
	adds r4, r0, #0	@ 0008c7ea 041c
.org 0x8c7ec
	ldrb r0, [r4, #15]	@ 0008c7ec e07b
.org 0x8c7ee
	cmp r0, #0	@ 0008c7ee 0028
.org 0x8c7f0
	bne.n 0x8c806	@ 0008c7f0 09d1
.org 0x8c7f2
	movs r1, #144	@ 0008c7f2 9021
.org 0x8c7f4
	lsls r1, r1, #6	@ 0008c7f4 8901
.org 0x8c7f6
	adds r0, r4, #0	@ 0008c7f6 201c
.org 0x8c7f8
	bl 0x1cf00	@ 0008c7f8 90f782fb
.org 0x8c7fc
	movs r0, #8	@ 0008c7fc 0820
.org 0x8c7fe
	strb r0, [r4, #18]	@ 0008c7fe a074
.org 0x8c800
	ldrb r0, [r4, #15]	@ 0008c800 e07b
.org 0x8c802
	adds r0, #1	@ 0008c802 0130
.org 0x8c804
	strb r0, [r4, #15]	@ 0008c804 e073
.org 0x8c806
	adds r0, r4, #0	@ 0008c806 201c
.org 0x8c808
	bl 0x1cff0	@ 0008c808 90f7f2fb
.org 0x8c80c
	ldrb r0, [r4, #18]	@ 0008c80c a07c
.org 0x8c80e
	subs r0, #1	@ 0008c80e 0138
.org 0x8c810
	strb r0, [r4, #18]	@ 0008c810 a074
.org 0x8c812
	lsls r0, r0, #24	@ 0008c812 0006
.org 0x8c814
	lsrs r1, r0, #24	@ 0008c814 010e
.org 0x8c816
	cmp r1, #0	@ 0008c816 0029
.org 0x8c818
	bne.n 0x8c820	@ 0008c818 02d1
.org 0x8c81a
	movs r0, #1	@ 0008c81a 0120
.org 0x8c81c
	strb r0, [r4, #14]	@ 0008c81c a073
.org 0x8c81e
	strb r1, [r4, #15]	@ 0008c81e e173
.org 0x8c820
	pop {r4}	@ 0008c820 10bc
.org 0x8c822
	pop {r0}	@ 0008c822 01bc
.org 0x8c824
	bx r0	@ 0008c824 0047
