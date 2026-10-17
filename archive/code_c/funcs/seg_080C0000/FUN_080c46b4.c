// undefined FUN_080c46b4(void)
// entry 0x80c46b4


undefined4 FUN_080c46b4(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080c4780);
    FUN_0801cf00(param_1,0x5300);
    local_14 = *(undefined4 *)(*DAT_080c4784 + 0x54);
    local_10 = *(undefined4 *)(param_1 + 0xb4);
    uVar2 = FUN_0810d3ac(param_1 + 0x54,&local_14);
    iVar4 = DAT_080c4788;
    iVar3 = (bVar1 >> 4 & 1) * 2;
    uVar2 = (uVar2 & 0xff) + iVar3 * (0x140 - (uVar2 & 0xff));
    uVar5 = uVar2 & 0xff;
    if (0x80 < uVar2 * 0x1000000 + 0xb0000000 >> 0x18) {
      uVar5 = 0x50;
    }
    uVar5 = uVar5 + (0x140 - uVar5) * iVar3;
    *(int *)(param_1 + 0x5c) =
         *(short *)((uVar5 * 0x1000000 + 0x40000000 >> 0x17) + DAT_080c4788) * 3;
    *(int *)(param_1 + 0x60) = *(short *)((uVar5 & 0xff) * 2 + iVar4) * 3;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar4;
  if (*(int *)(param_1 + 0xb4) <= iVar4) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb4);
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


