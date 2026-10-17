// undefined FUN_080ce858(void)
// entry 0x80ce858


undefined4 FUN_080ce858(int param_1)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  byte bVar5;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if (*(char *)(param_1 + 0xb9) == '\0') {
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  }
  if ((0 < *(int *)(param_1 + 0x60)) && (*(int *)(param_1 + 0xb4) == 0)) {
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0x58);
  }
  if (*(char *)(param_1 + 0xba) == '\0') {
    FUN_080cea40(param_1);
  }
  cVar1 = FUN_080cec00(param_1);
  if (cVar1 != '\0') {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ce908);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
  }
  uVar4 = FUN_0801fb14(DAT_080ce90c,param_1 + 0x54);
  if (uVar4 < 0x4001) {
    if (*(byte *)(param_1 + 0x12) < 0x14) {
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      bVar2 = *(byte *)(param_1 + 10);
      bVar5 = bVar2 & 0xfb;
      *(byte *)(param_1 + 10) = bVar5;
      if ((*(byte *)(param_1 + 0x12) & 2) == 0) {
        bVar2 = bVar2 & 0xfa;
      }
      else {
        bVar2 = bVar5 | 1;
      }
      *(byte *)(param_1 + 10) = bVar2;
    }
    FUN_0801cff0(param_1);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ce908);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0xc);
  }
  return in_lr;
}


