@ FUN_08019ee4  entry 0x08019ee4  size 28
.thumb
.org 0x19ee4
FUN_08019ee4:
	push {r4, lr}	@ 00019ee4 10b5
.org 0x19ee6
	ldr r0, [pc, #24]	@ 00019ee6 0648
.org 0x19ee8
	ldr r1, [pc, #24]	@ 00019ee8 0649
.org 0x19eea
	adds r4, r0, r1	@ 00019eea 4418
.org 0x19eec
	ldr r0, [r4, #0]	@ 00019eec 2068
.org 0x19eee
	cmp r0, #0	@ 00019eee 0028
.org 0x19ef0
	bne.n 0x19efa	@ 00019ef0 03d1
.org 0x19ef2
	movs r0, #0	@ 00019ef2 0020
.org 0x19ef4
	bl 0x103830	@ 00019ef4 e9f09cfc
.org 0x19ef8
	str r0, [r4, #0]	@ 00019ef8 2060
.org 0x19efa
	pop {r4}	@ 00019efa 10bc
.org 0x19efc
	pop {r0}	@ 00019efc 01bc
.org 0x19efe
	bx r0	@ 00019efe 0047
