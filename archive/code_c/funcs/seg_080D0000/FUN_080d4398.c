// undefined FUN_080d4398(void)
// entry 0x80d4398


undefined4 FUN_080d4398(int param_1)

{
  ushort *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  puVar1 = DAT_080d4404;
  iVar3 = *(int *)(param_1 + 8);
  if (*(byte *)(iVar3 + 0xc) < 2) {
    if (*(char *)(iVar3 + 0xf) == '\0') {
      *DAT_080d4404 = *DAT_080d4404 | 0x100;
      FUN_08001d30((uint)*(byte *)(iVar3 + 0x10) * 0x14 + DAT_080d4408,(puVar1[2] & 0xc) << 0xc);
      FUN_08002208((uint)*(byte *)(iVar3 + 0x10) * 0x14 + DAT_080d440c,0);
      *(char *)(iVar3 + 0xf) = *(char *)(iVar3 + 0xf) + '\x01';
    }
    if (*(byte *)(iVar3 + 0xe) < 6) {
                    /* WARNING: Could not recover jumptable at 0x080d4402. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(PTR_PTR_080d4410 + (uint)*(byte *)(iVar3 + 0xe) * 4))();
      return uVar2;
    }
  }
  return in_lr;
}


