@ FUN_0810f950  entry 0x0810f950  size 22
.thumb
.org 0x10f950
FUN_0810f950:
	push {r4, lr}	@ 0010f950 10b5
.org 0x10f952
	adds r4, r0, #0	@ 0010f952 041c
.org 0x10f954
	bl 0x10f968	@ 0010f954 00f008f8
.org 0x10f958
	adds r0, r4, #0	@ 0010f958 201c
.org 0x10f95a
	movs r1, #4	@ 0010f95a 0421
.org 0x10f95c
	bl 0x10f6f8	@ 0010f95c fff7ccfe
.org 0x10f960
	pop {r4}	@ 0010f960 10bc
.org 0x10f962
	pop {r0}	@ 0010f962 01bc
.org 0x10f964
	bx r0	@ 0010f964 0047
