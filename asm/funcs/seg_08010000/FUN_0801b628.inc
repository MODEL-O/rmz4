@ FUN_0801b628  entry 0x0801b628  size 66
.thumb
.org 0x1b628
FUN_0801b628:
	push {lr}	@ 0001b628 00b5
.org 0x1b62a
	movs r0, #138	@ 0001b62a 8a20
.org 0x1b62c
	bl 0x2624	@ 0001b62c e6f7faff
.org 0x1b630
	movs r0, #139	@ 0001b630 8b20
.org 0x1b632
	bl 0x2624	@ 0001b632 e6f7f7ff
.org 0x1b636
	movs r0, #140	@ 0001b636 8c20
.org 0x1b638
	bl 0x2624	@ 0001b638 e6f7f4ff
.org 0x1b63c
	movs r0, #141	@ 0001b63c 8d20
.org 0x1b63e
	bl 0x2624	@ 0001b63e e6f7f1ff
.org 0x1b642
	movs r0, #142	@ 0001b642 8e20
.org 0x1b644
	bl 0x2624	@ 0001b644 e6f7eeff
.org 0x1b648
	movs r0, #143	@ 0001b648 8f20
.org 0x1b64a
	bl 0x2624	@ 0001b64a e6f7ebff
.org 0x1b64e
	movs r0, #144	@ 0001b64e 9020
.org 0x1b650
	bl 0x2624	@ 0001b650 e6f7e8ff
.org 0x1b654
	movs r0, #145	@ 0001b654 9120
.org 0x1b656
	bl 0x2624	@ 0001b656 e6f7e5ff
.org 0x1b65a
	movs r0, #146	@ 0001b65a 9220
.org 0x1b65c
	bl 0x2624	@ 0001b65c e6f7e2ff
.org 0x1b660
	movs r0, #147	@ 0001b660 9320
.org 0x1b662
	bl 0x2624	@ 0001b662 e6f7dfff
.org 0x1b666
	pop {r0}	@ 0001b666 01bc
.org 0x1b668
	bx r0	@ 0001b668 0047
