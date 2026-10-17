@ FUN_08036924  entry 0x08036924  size 46
.thumb
.org 0x36924
FUN_08036924:
	push {r4, lr}	@ 00036924 10b5
.org 0x36926
	adds r4, r0, #0	@ 00036926 041c
.org 0x36928
	ldr r1, [pc, #40]	@ 00036928 0a49
.org 0x3692a
	bl 0x1cf00	@ 0003692a e6f7e9fa
.org 0x3692e
	adds r0, r4, #0	@ 0003692e 201c
.org 0x36930
	bl 0x3a308	@ 00036930 03f0eafc
.org 0x36934
	ldr r0, [pc, #32]	@ 00036934 0848
.org 0x36936
	adds r2, r4, r0	@ 00036936 2218
.org 0x36938
	movs r1, #0	@ 00036938 0021
.org 0x3693a
	movs r0, #1	@ 0003693a 0120
.org 0x3693c
	strb r0, [r2, #0]	@ 0003693c 1070
.org 0x3693e
	movs r2, #129	@ 0003693e 8122
.org 0x36940
	lsls r2, r2, #1	@ 00036940 5200
.org 0x36942
	adds r0, r4, r2	@ 00036942 a018
.org 0x36944
	strb r1, [r0, #0]	@ 00036944 0170
.org 0x36946
	adds r0, r4, #0	@ 00036946 201c
.org 0x36948
	bl 0x3695c	@ 00036948 00f008f8
.org 0x3694c
	pop {r4}	@ 0003694c 10bc
.org 0x3694e
	pop {r0}	@ 0003694e 01bc
.org 0x36950
	bx r0	@ 00036950 0047
