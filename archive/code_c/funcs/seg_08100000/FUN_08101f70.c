// undefined FUN_08101f70(void)
// entry 0x8101f70


undefined4 FUN_08101f70(int param_1)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 in_lr;
  
  if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
    cVar1 = *(char *)(param_1 + 0x11);
    puVar7 = (uint *)(*(int *)(param_1 + 0x28) + 0xb4);
    if (cVar1 != '\0') {
      if (cVar1 == '\x01') {
        uVar6 = *puVar7;
        uVar4 = DAT_08101fd0;
      }
      else {
        uVar6 = *puVar7;
        uVar4 = DAT_08101fe8;
      }
      if (uVar6 <= uVar4) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
        return in_lr;
      }
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    if (cVar1 == '\0') {
      uVar4 = *puVar7;
      uVar5 = 0x3c;
    }
    else if (cVar1 == '\x01') {
      uVar4 = *puVar7;
      uVar5 = 600;
    }
    else {
      uVar4 = *puVar7;
      uVar5 = DAT_08102030;
    }
    uVar5 = FUN_08129120(uVar4,uVar5);
    sVar2 = FUN_08129198(uVar5,10);
    *(short *)(param_1 + 0xc0) = sVar2 + 0x6700;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08101fb4);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0xc);
  }
  return in_lr;
}


