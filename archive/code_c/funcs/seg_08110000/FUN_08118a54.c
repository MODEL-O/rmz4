// undefined FUN_08118a54(void)
// entry 0x8118a54


undefined4 FUN_08118a54(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  cVar1 = FUN_08118248(param_1);
  if (cVar1 == '\0') {
    if ((*(ushort *)(DAT_08118a9c + 4) & 1) == 0) {
      uVar2 = (uint)*(byte *)(param_1 + DAT_08118ac0);
      if (uVar2 < 5) {
                    /* WARNING: Could not recover jumptable at 0x08118abe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(PTR_PTR_08118ac4 + uVar2 * 4))();
        return uVar3;
      }
      if (uVar2 != *(byte *)(param_1 + DAT_08118d40)) {
        FUN_08002b10(1);
      }
    }
    else {
      FUN_08002b10(2);
      *(char *)(param_1 + 3) = *(char *)(param_1 + DAT_08118aa0) + '\x01';
      *(undefined1 *)(param_1 + DAT_08118aa4) = 0;
    }
  }
  return in_lr;
}


