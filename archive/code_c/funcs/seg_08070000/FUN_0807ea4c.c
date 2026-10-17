// undefined FUN_0807ea4c(void)
// entry 0x807ea4c


undefined4 FUN_0807ea4c(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  uVar1 = FUN_0807ea9c();
  iVar2 = 0;
  piVar3 = (int *)((uVar1 & 0xff) * 4 + DAT_0807ea90);
  do {
    *(undefined1 *)(param_1 + 0xc0 + iVar2) = *(undefined1 *)(*piVar3 + iVar2);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 7);
  if ((*(byte *)(*DAT_0807ea94 + 1) < 5) || ((*(byte *)(DAT_0807ea98 + 4) & 4) != 0)) {
    *(undefined1 *)(param_1 + 0xc6) = 0;
  }
  return in_lr;
}


