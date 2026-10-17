@ FUN_080a0900  entry 0x080a0900  size 30
.thumb
.org 0xa0900
FUN_080a0900:
	push {lr}	@ 000a0900 00b5
.org 0xa0902
	adds r2, r0, #0	@ 000a0902 021c
.org 0xa0904
	ldr r0, [pc, #24]	@ 000a0904 0648
.org 0xa0906
	adds r1, r0, #0	@ 000a0906 011c
.org 0xa0908
	adds r1, #38	@ 000a0908 2631
.org 0xa090a
	ldrb r0, [r1, #0]	@ 000a090a 0878
.org 0xa090c
	cmp r0, #0	@ 000a090c 0028
.org 0xa090e
	beq.n 0xa0914	@ 000a090e 01d0
.org 0xa0910
	adds r0, #255	@ 000a0910 ff30
.org 0xa0912
	strb r0, [r1, #0]	@ 000a0912 0870
.org 0xa0914
	adds r0, r2, #0	@ 000a0914 101c
.org 0xa0916
	bl 0x7f8ec	@ 000a0916 def7e9ff
.org 0xa091a
	pop {r0}	@ 000a091a 01bc
.org 0xa091c
	bx r0	@ 000a091c 0047
