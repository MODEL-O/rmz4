// undefined FUN_080ad974(void)
// entry 0x80ad974


undefined4 FUN_080ad974(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  iVar3 = *(int *)(param_1 + 0x2c);
  if ((((*(uint *)(param_1 + 0x14) & 4) == 0) && (cVar1 = *(char *)(iVar4 + 9), cVar1 != 'N')) &&
     (cVar1 != '0')) {
    if (*(char *)(iVar4 + 8) == '\x01') {
      if (cVar1 == '\x1d') {
        *(undefined1 *)(iVar3 + 0xb8) = 1;
        FUN_080adbcc(iVar3);
      }
      if (*(char *)(iVar4 + 9) == '\x1e') {
        *(undefined1 *)(iVar3 + 0xb8) = 2;
        FUN_080adbcc(iVar3);
      }
    }
  }
  else {
    piVar2 = (int *)((uint)*(byte *)(iVar3 + 9) * 4 + DAT_080ad9bc);
    *(undefined4 *)(iVar3 + 0xc) = 2;
    *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    *(undefined4 *)(iVar3 + 0x8c) = 0;
    *(undefined4 *)(iVar3 + 0x90) = 0;
    *(undefined1 *)(iVar3 + 0x94) = 0;
    *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfb;
  }
  return in_lr;
}


