@ FUN_0811e98a  entry 0x0811e98a  size 18
.thumb
.org 0x11e98a
FUN_0811e98a:
	movs r0, #63	@ 0011e98a 3f20
.org 0x11e98c
	bl 0x25d8	@ 0011e98c e3f624fe
.org 0x11e990
	movs r0, #64	@ 0011e990 4020
.org 0x11e992
	bl 0x25d8	@ 0011e992 e3f621fe
.org 0x11e996
	pop {r4, r5, r6, r7}	@ 0011e996 f0bc
.org 0x11e998
	pop {r0}	@ 0011e998 01bc
.org 0x11e99a
	bx r0	@ 0011e99a 0047
