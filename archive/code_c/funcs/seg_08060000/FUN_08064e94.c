// undefined FUN_08064e94(void)
// entry 0x8064e94


undefined4 FUN_08064e94(int param_1)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(DAT_08064f98);
    if (*(int *)(param_1 + 0xc4) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0xc4) + 0xb5) = 1;
    }
    iVar4 = *(int *)(param_1 + 0xbc);
    if (iVar4 != 0) {
      *(undefined1 *)(iVar4 + 0xb5) = 1;
      *(int *)(param_1 + 0xbc) = 0;
    }
    iVar4 = *(int *)(param_1 + 200);
    if (iVar4 != 0) {
      *(byte *)(iVar4 + 10) = *(byte *)(iVar4 + 10) & 0xfc;
      *(undefined4 *)(iVar4 + 0x8c) = 0;
      *(undefined4 *)(iVar4 + 0x90) = 0;
      *(undefined1 *)(iVar4 + 0x94) = 0;
      *(byte *)(iVar4 + 10) = *(byte *)(iVar4 + 10) & 0xfb;
      piVar3 = (int *)((uint)*(byte *)(iVar4 + 9) * 4 + DAT_08064f9c);
      *(undefined4 *)(iVar4 + 0xc) = 3;
      *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(*piVar3 + 0xc);
      *(int *)(param_1 + 200) = 0;
    }
    iVar4 = *(int *)(param_1 + 0xd8);
    if (iVar4 != 0) {
      *(byte *)(iVar4 + 10) = *(byte *)(iVar4 + 10) & 0xfc;
      *(undefined4 *)(iVar4 + 0x8c) = 0;
      *(undefined4 *)(iVar4 + 0x90) = 0;
      *(undefined1 *)(iVar4 + 0x94) = 0;
      *(byte *)(iVar4 + 10) = *(byte *)(iVar4 + 10) & 0xfb;
      piVar3 = (int *)((uint)*(byte *)(iVar4 + 9) * 4 + DAT_08064fa0);
      *(undefined4 *)(iVar4 + 0xc) = 3;
      *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(*piVar3 + 0xc);
      *(int *)(param_1 + 0xd8) = 0;
    }
    FUN_080664bc(param_1 + 0x54,2,2);
    uVar5 = ~(uint)(*(byte *)(*DAT_08064fa4 + 10) >> 4) & 1;
    FUN_08065a94(param_1,0x11);
    *(char *)(param_1 + 0x4c) = (char)uVar5;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
    if (uVar5 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + DAT_08065050;
    iVar4 = (uVar5 * 2 + -1) * 0x400;
    *(int *)(param_1 + 0x5c) = iVar4;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0x1f;
    }
    *(int *)(param_1 + 100) = -(iVar4 >> 5);
    *(undefined1 *)(param_1 + 0x12) = 0xc;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb4) * 2 + DAT_08065058) * 4 +
                               DAT_08065054)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb4) * 4 +
                                       *(int *)((uint)*(byte *)(param_1 + 0xb5) * 4 + DAT_0806505c))
                              + (int)*(char *)(param_1 + 0x71)) * 0x18);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 0xe) = 1;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


