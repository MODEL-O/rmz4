// undefined FUN_080e8538(void)
// entry 0x80e8538


undefined4 FUN_080e8538(int param_1)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x12);
  bVar2 = cVar1 - 1;
  *(byte *)(param_1 + 0x12) = bVar2;
  if (bVar2 == 0) {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e8568);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_080e85b0(param_1);
  }
  else {
    if ((byte)(cVar1 - 1U) < 8) {
      if ((bVar2 & 1) == 0) {
        bVar2 = *(byte *)(param_1 + 10) & 0xfe;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) | 1;
      }
      *(byte *)(param_1 + 10) = bVar2;
    }
    FUN_0801cff0(param_1);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar4 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar4;
    if (0x700 < iVar4) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
  }
  return in_lr;
}


