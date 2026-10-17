// undefined FUN_080160ac(void)
// entry 0x80160ac


undefined4 FUN_080160ac(int param_1)

{
  ushort *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    puVar1 = (ushort *)(((*(uint *)(param_1 + 0x5c) & 0xffff) >> 4) * 2 + DAT_080160f4);
    *puVar1 = (ushort)DAT_080160f8 & *puVar1 | 2;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *DAT_080160fc = 0x3c000;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(byte *)(param_1 + 0xf) < 5) {
                    /* WARNING: Could not recover jumptable at 0x080160f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(PTR_PTR_08016100 + (uint)*(byte *)(param_1 + 0xf) * 4))();
    return uVar2;
  }
  uVar2 = DAT_080163e8;
  puVar3 = DAT_080163e4;
  if (DAT_080163e0 < *(int *)(*DAT_080163dc + 0x58)) {
    uVar2 = 0x3c0000;
    puVar3 = DAT_080163fc;
  }
  *puVar3 = uVar2;
  return in_lr;
}


