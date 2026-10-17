// undefined FUN_080e2898(void)
// entry 0x80e2898


undefined4 FUN_080e2898(int param_1)

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
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e28c8);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_080e28f4(param_1);
  }
  else if ((byte)(cVar1 - 1U) < 4) {
    if ((bVar2 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar2;
  }
  return in_lr;
}


