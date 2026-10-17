@ FUN_0800cbc4  entry 0x0800cbc4  size 90
.thumb
.org 0xcbc4
FUN_0800cbc4:
	push {lr}	@ 0000cbc4 00b5
.org 0xcbc6
	movs r0, #2	@ 0000cbc6 0220
.org 0xcbc8
	bl 0x2624	@ 0000cbc8 f5f72cfd
.org 0xcbcc
	movs r0, #3	@ 0000cbcc 0320
.org 0xcbce
	bl 0x2624	@ 0000cbce f5f729fd
.org 0xcbd2
	movs r0, #4	@ 0000cbd2 0420
.org 0xcbd4
	bl 0x2624	@ 0000cbd4 f5f726fd
.org 0xcbd8
	movs r0, #11	@ 0000cbd8 0b20
.org 0xcbda
	bl 0x2624	@ 0000cbda f5f723fd
.org 0xcbde
	movs r0, #14	@ 0000cbde 0e20
.org 0xcbe0
	bl 0x2624	@ 0000cbe0 f5f720fd
.org 0xcbe4
	movs r0, #15	@ 0000cbe4 0f20
.org 0xcbe6
	bl 0x2624	@ 0000cbe6 f5f71dfd
.org 0xcbea
	movs r0, #16	@ 0000cbea 1020
.org 0xcbec
	bl 0x2624	@ 0000cbec f5f71afd
.org 0xcbf0
	movs r0, #17	@ 0000cbf0 1120
.org 0xcbf2
	bl 0x2624	@ 0000cbf2 f5f717fd
.org 0xcbf6
	movs r0, #24	@ 0000cbf6 1820
.org 0xcbf8
	bl 0x2624	@ 0000cbf8 f5f714fd
.org 0xcbfc
	movs r0, #25	@ 0000cbfc 1920
.org 0xcbfe
	bl 0x2624	@ 0000cbfe f5f711fd
.org 0xcc02
	movs r0, #26	@ 0000cc02 1a20
.org 0xcc04
	bl 0x2624	@ 0000cc04 f5f70efd
.org 0xcc08
	movs r0, #27	@ 0000cc08 1b20
.org 0xcc0a
	bl 0x2624	@ 0000cc0a f5f70bfd
.org 0xcc0e
	movs r0, #224	@ 0000cc0e e020
.org 0xcc10
	bl 0x2624	@ 0000cc10 f5f708fd
.org 0xcc14
	movs r0, #225	@ 0000cc14 e120
.org 0xcc16
	bl 0x2624	@ 0000cc16 f5f705fd
.org 0xcc1a
	pop {r0}	@ 0000cc1a 01bc
.org 0xcc1c
	bx r0	@ 0000cc1c 0047
