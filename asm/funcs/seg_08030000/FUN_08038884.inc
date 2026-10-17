@ FUN_08038884  entry 0x08038884  size 36
.thumb
.org 0x38884
FUN_08038884:
	push {lr}	@ 00038884 00b5
.org 0x38886
	movs r2, #159	@ 00038886 9f22
.org 0x38888
	lsls r2, r2, #1	@ 00038888 5200
.org 0x3888a
	adds r1, r0, r2	@ 0003888a 8118
.org 0x3888c
	ldrb r0, [r1, #0]	@ 0003888c 0878
.org 0x3888e
	cmp r0, #0	@ 0003888e 0028
.org 0x38890
	bne.n 0x38898	@ 00038890 02d1
.org 0x38892
	movs r0, #224	@ 00038892 e020
.org 0x38894
	lsls r0, r0, #3	@ 00038894 c000
.org 0x38896
	b.n 0x388a4	@ 00038896 05e0
.org 0x38898
	ldrb r0, [r1, #0]	@ 00038898 0878
.org 0x3889a
	movs r1, #128	@ 0003889a 8021
.org 0x3889c
	lsls r1, r1, #1	@ 0003889c 4900
.org 0x3889e
	subs r1, r1, r0	@ 0003889e 091a
.org 0x388a0
	lsls r0, r1, #3	@ 000388a0 c800
.org 0x388a2
	subs r0, r0, r1	@ 000388a2 401a
.org 0x388a4
	pop {r1}	@ 000388a4 02bc
.org 0x388a6
	bx r1	@ 000388a6 0847
