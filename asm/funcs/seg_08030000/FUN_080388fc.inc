@ FUN_080388fc  entry 0x080388fc  size 32
.thumb
.org 0x388fc
FUN_080388fc:
	push {lr}	@ 000388fc 00b5
.org 0x388fe
	movs r2, #159	@ 000388fe 9f22
.org 0x38900
	lsls r2, r2, #1	@ 00038900 5200
.org 0x38902
	adds r1, r0, r2	@ 00038902 8118
.org 0x38904
	ldrb r0, [r1, #0]	@ 00038904 0878
.org 0x38906
	cmp r0, #0	@ 00038906 0028
.org 0x38908
	bne.n 0x38910	@ 00038908 02d1
.org 0x3890a
	movs r0, #128	@ 0003890a 8020
.org 0x3890c
	lsls r0, r0, #1	@ 0003890c 4000
.org 0x3890e
	b.n 0x38918	@ 0003890e 03e0
.org 0x38910
	ldrb r1, [r1, #0]	@ 00038910 0978
.org 0x38912
	movs r0, #128	@ 00038912 8020
.org 0x38914
	lsls r0, r0, #1	@ 00038914 4000
.org 0x38916
	subs r0, r0, r1	@ 00038916 401a
.org 0x38918
	pop {r1}	@ 00038918 02bc
.org 0x3891a
	bx r1	@ 0003891a 0847
