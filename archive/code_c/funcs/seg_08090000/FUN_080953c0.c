// undefined FUN_080953c0(void)
// entry 0x80953c0


undefined4 FUN_080953c0(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  undefined4 in_lr;
  undefined4 local_1c [2];
  
  local_1c[0] = *DAT_08095438;
  local_1c[1] = DAT_08095438[1];
  iVar5 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(iVar5 + 10) >> 4;
  bVar4 = bVar1 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,*(undefined2 *)(local_1c + *(byte *)(param_1 + 0x11)));
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(char *)(param_1 + 0xb5) == '\0') {
    FUN_0801cff0(param_1);
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(byte *)(param_1 + 0x4c) = bVar4;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar4 << 4;
    uVar3 = *(undefined4 *)(iVar5 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar5 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    if (*(char *)(param_1 + 0xb4) != '\0') {
      *(char *)(param_1 + 0xb4) = '\0';
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809543c);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
  }
  return in_lr;
}


