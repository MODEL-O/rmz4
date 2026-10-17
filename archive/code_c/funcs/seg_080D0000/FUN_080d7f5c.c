// undefined FUN_080d7f5c(void)
// entry 0x80d7f5c


undefined4 FUN_080d7f5c(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int *piVar4;
  byte bVar5;
  byte *pbVar6;
  byte bVar7;
  byte bVar8;
  undefined4 in_lr;
  
  bVar2 = *(byte *)(*(int *)(param_1 + 0x28) + 10);
  bVar1 = bVar2 >> 4;
  bVar7 = bVar1 & 1;
  bVar2 = bVar2 >> 5;
  bVar8 = bVar2 & 1;
  if (*(char *)(param_1 + 0xe) == '\0') {
    bVar5 = *(byte *)(param_1 + 10);
    *(byte *)(param_1 + 10) = bVar5 | 1;
    if ((bVar1 & 1) == 0) {
      bVar5 = bVar5 & 0xef | 1;
    }
    else {
      bVar5 = bVar5 | 0x11;
    }
    *(byte *)(param_1 + 10) = bVar5;
    *(byte *)(param_1 + 0x4c) = bVar7;
    pbVar6 = (byte *)(param_1 + 0x4a);
    *pbVar6 = *pbVar6 & 0xef | bVar7 << 4;
    if ((bVar2 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xdf;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x20;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(byte *)(param_1 + 0x4d) = bVar8;
    *pbVar6 = *pbVar6 & 0xdf | bVar8 << 5;
    FUN_0801cf00(param_1,**(undefined2 **)(param_1 + 0x74));
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == '\0') {
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d8030);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


