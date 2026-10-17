// undefined FUN_0809126c(void)
// entry 0x809126c


undefined4 FUN_0809126c(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    if ((byte)(*(char *)(param_1 + 0xd) - 1U) < 8) {
      iVar2 = FUN_08008988(*(undefined4 *)(iVar4 + 0xc4),*(undefined4 *)(iVar4 + 200));
      iVar2 = *(int *)(param_1 + 0x54) - iVar2 >> 8;
      if (iVar2 - 1U < 0xce) {
        if (*(int *)(param_1 + 0x58) < *(int *)(iVar4 + 200)) {
          if (iVar2 - 0x21U < 0x8f) {
            if (iVar2 < 0x48) {
              puVar3 = (undefined1 *)(iVar4 + 0xda);
            }
            else if (iVar2 < 0x88) {
              puVar3 = (undefined1 *)(iVar4 + 0xdb);
            }
            else {
              puVar3 = (undefined1 *)(iVar4 + 0xdc);
            }
            *puVar3 = 1;
          }
        }
        else {
          iVar2 = FUN_08128fb8(iVar2,0x2c);
          if (iVar2 < 8) {
            *(undefined1 *)(iVar4 + iVar2 + 0xdd) = 1;
          }
        }
      }
    }
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_08091320));
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809129c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_08090f70(param_1);
  }
  return in_lr;
}


