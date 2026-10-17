@ FUN_0800fcc0  entry 0x0800fcc0  size 96
.thumb
.org 0xfcc0
FUN_0800fcc0:
	push {lr}	@ 0000fcc0 00b5
.org 0xfcc2
	movs r0, #52	@ 0000fcc2 3420
.org 0xfcc4
	bl 0x2624	@ 0000fcc4 f2f7aefc
.org 0xfcc8
	movs r0, #53	@ 0000fcc8 3520
.org 0xfcca
	bl 0x2624	@ 0000fcca f2f7abfc
.org 0xfcce
	movs r0, #55	@ 0000fcce 3720
.org 0xfcd0
	bl 0x2624	@ 0000fcd0 f2f7a8fc
.org 0xfcd4
	movs r0, #56	@ 0000fcd4 3820
.org 0xfcd6
	bl 0x2624	@ 0000fcd6 f2f7a5fc
.org 0xfcda
	movs r0, #57	@ 0000fcda 3920
.org 0xfcdc
	bl 0x2624	@ 0000fcdc f2f7a2fc
.org 0xfce0
	movs r0, #86	@ 0000fce0 5620
.org 0xfce2
	bl 0x2624	@ 0000fce2 f2f79ffc
.org 0xfce6
	movs r0, #87	@ 0000fce6 5720
.org 0xfce8
	bl 0x2624	@ 0000fce8 f2f79cfc
.org 0xfcec
	movs r0, #88	@ 0000fcec 5820
.org 0xfcee
	bl 0x2624	@ 0000fcee f2f799fc
.org 0xfcf2
	movs r0, #89	@ 0000fcf2 5920
.org 0xfcf4
	bl 0x2624	@ 0000fcf4 f2f796fc
.org 0xfcf8
	movs r0, #90	@ 0000fcf8 5a20
.org 0xfcfa
	bl 0x2624	@ 0000fcfa f2f793fc
.org 0xfcfe
	movs r0, #91	@ 0000fcfe 5b20
.org 0xfd00
	bl 0x2624	@ 0000fd00 f2f790fc
.org 0xfd04
	movs r0, #93	@ 0000fd04 5d20
.org 0xfd06
	bl 0x2624	@ 0000fd06 f2f78dfc
.org 0xfd0a
	movs r0, #172	@ 0000fd0a ac20
.org 0xfd0c
	bl 0x2624	@ 0000fd0c f2f78afc
.org 0xfd10
	movs r0, #173	@ 0000fd10 ad20
.org 0xfd12
	bl 0x2624	@ 0000fd12 f2f787fc
.org 0xfd16
	movs r0, #174	@ 0000fd16 ae20
.org 0xfd18
	bl 0x2624	@ 0000fd18 f2f784fc
.org 0xfd1c
	pop {r0}	@ 0000fd1c 01bc
.org 0xfd1e
	bx r0	@ 0000fd1e 0047
