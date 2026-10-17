// undefined FUN_080bc92c(void)
// entry 0x80bc92c


undefined4 FUN_080bc92c(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x14) & 1) != 0) &&
     (iVar3 = *(int *)(param_1 + 0x2c), (*(uint *)(param_1 + 0x14) & 0x20000) != 0)) {
    *(undefined1 *)(iVar3 + 0xb4) = 1;
    piVar1 = DAT_080bc97c;
    if (*DAT_080bc97c != 0) {
      FUN_0803a578(*DAT_080bc97c,8,0);
      iVar2 = DAT_080bc980;
      *(int *)(iVar3 + 0x5c) = DAT_080bc980;
      *(int *)(iVar3 + 0x60) = iVar2;
      if (*(int *)(iVar3 + 0x54) < *(int *)(*piVar1 + 0x54)) {
        *(int *)(iVar3 + 0x5c) = iVar2 * -0x100 >> 8;
      }
    }
  }
  return in_lr;
}


