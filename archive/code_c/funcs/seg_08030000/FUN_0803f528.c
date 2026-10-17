// undefined FUN_0803f528(void)
// entry 0x803f528


undefined4 FUN_0803f528(int param_1)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x2c);
  cVar2 = FUN_0803a99c(param_1,3);
  if ((cVar2 == '\0') && ((*(uint *)(param_1 + 0x8c) & 4) != 0)) {
    bVar1 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar1 + 1;
    if (bVar1 < 4) {
      FUN_08005794(param_1 + 0x74,DAT_0803f5b4,5,0xffffffff,0xffffffff,
                   *(undefined1 *)(param_1 + 0x12));
    }
    else {
      cVar2 = '\x01';
    }
  }
  if (*(char *)(iVar4 + 0xfa) == '\x02') {
    cVar2 = '\x01';
  }
  if (cVar2 == '\0') {
    FUN_0801cff0(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  }
  else {
    if (cVar2 != -1) {
      FUN_080d0c88(2,param_1 + 0x54);
      FUN_08002b10(0x27);
    }
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0803f5b8);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_0803f5d4(param_1);
  }
  return in_lr;
}


