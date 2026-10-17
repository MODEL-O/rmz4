// undefined FUN_08080978(void)
// entry 0x8080978


undefined4 FUN_08080978(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(int *)(*DAT_080809bc + 0x54) - *(int *)(param_1 + 0x54)) + 0x3000U < 0x6001) {
    iVar1 = *(int *)(*DAT_080809bc + 0x58);
    if ((*(int *)(param_1 + 0x58) + DAT_080809c0 < iVar1) &&
       (iVar1 < *(int *)(param_1 + 0x58) + 0x1000)) {
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}


