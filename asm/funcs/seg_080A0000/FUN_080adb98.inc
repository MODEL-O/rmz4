@ FUN_080adb98  entry 0x080adb98  size 46
.thumb
.org 0xadb98
FUN_080adb98:
	push {lr}	@ 000adb98 00b5
.org 0xadb9a
	adds r2, r0, #0	@ 000adb9a 021c
.org 0xadb9c
	ldr r0, [pc, #40]	@ 000adb9c 0a48
.org 0xadb9e
	ldr r3, [r0, #0]	@ 000adb9e 0368
.org 0xadba0
	ldr r0, [r3, #84]	@ 000adba0 586d
.org 0xadba2
	ldr r1, [r2, #84]	@ 000adba2 516d
.org 0xadba4
	subs r0, r0, r1	@ 000adba4 401a
.org 0xadba6
	ldr r2, [r2, #88]	@ 000adba6 926d
.org 0xadba8
	movs r1, #240	@ 000adba8 f021
.org 0xadbaa
	lsls r1, r1, #4	@ 000adbaa 0901
.org 0xadbac
	adds r2, r2, r1	@ 000adbac 5218
.org 0xadbae
	ldr r1, [r3, #88]	@ 000adbae 996d
.org 0xadbb0
	subs r1, r1, r2	@ 000adbb0 891a
.org 0xadbb2
	lsls r0, r0, #8	@ 000adbb2 0002
.org 0xadbb4
	asrs r0, r0, #16	@ 000adbb4 0014
.org 0xadbb6
	lsls r1, r1, #8	@ 000adbb6 0902
.org 0xadbb8
	asrs r1, r1, #16	@ 000adbb8 0914
.org 0xadbba
	bl 0x128bdc	@ 000adbba 7bf00ff8
.org 0xadbbe
	lsls r0, r0, #16	@ 000adbbe 0004
.org 0xadbc0
	lsrs r0, r0, #24	@ 000adbc0 000e
.org 0xadbc2
	pop {r1}	@ 000adbc2 02bc
.org 0xadbc4
	bx r1	@ 000adbc4 0847
