// undefined FUN_080a2ea4(void)
// entry 0x80a2ea4


undefined4 FUN_080a2ea4(int param_1)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  short asStack_30 [12];
  
  FUN_08129258(asStack_30,DAT_080a2f24,0x18);
  iVar5 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 10);
  bVar2 = *(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080a2f28);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(byte *)(iVar5 + 0xc) < 3) {
    if (*(byte *)(iVar5 + 0xc) < 2) {
      uVar4 = *(undefined4 *)(iVar5 + 0x58);
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar5 + 0x54);
      *(undefined4 *)(param_1 + 0x58) = uVar4;
    }
    else {
      *(uint *)(param_1 + 0x54) =
           *(int *)(iVar5 + 0x54) + ((bVar1 >> 4 & 1) * 2 + -1) * (int)asStack_30[(uint)bVar2 * 2];
      *(int *)(param_1 + 0x58) = *(int *)(iVar5 + 0x58) + (int)asStack_30[(uint)bVar2 * 2 + 1];
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
      FUN_08128f80(param_1,*(undefined4 *)(DAT_080a2f70 + 4));
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a2f2c);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0xc);
  }
  return in_lr;
}


