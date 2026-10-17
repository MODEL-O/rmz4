// undefined FUN_080de53c(void)
// entry 0x80de53c


undefined4 FUN_080de53c(int param_1)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  undefined4 in_lr;
  
  FUN_0801cff0();
  cVar1 = *(char *)(param_1 + 0x12);
  bVar2 = cVar1 - 1;
  *(byte *)(param_1 + 0x12) = bVar2;
  if (bVar2 == 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080de574);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0xc);
    return in_lr;
  }
  if ((byte)(cVar1 - 1U) < 0xc) {
    if ((bVar2 & 3) == 0) {
      bVar2 = *(byte *)(param_1 + 10) | 1;
      goto LAB_080de5a6;
    }
  }
  else if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) | 1;
    goto LAB_080de5a6;
  }
  bVar2 = *(byte *)(param_1 + 10) & 0xfe;
LAB_080de5a6:
  *(byte *)(param_1 + 10) = bVar2;
  return in_lr;
}


