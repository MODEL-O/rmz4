// undefined FUN_080fe938(void)
// entry 0x80fe938


undefined4 FUN_080fe938(int param_1)

{
  int iVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    iVar1 = DAT_080fea44;
    uVar4 = *(uint *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_080fea44);
    pbVar5 = (byte *)((uVar4 >> 3) + DAT_080fea40 + 4);
    *pbVar5 = (byte)(1 << (uVar4 & 7)) | *pbVar5;
    uVar4 = *(uint *)((uint)*(byte *)(param_1 + 0x10) * 4 + iVar1);
    pbVar5 = (byte *)((uVar4 >> 3) + DAT_080fea48);
    *pbVar5 = (byte)(1 << (uVar4 & 7)) | *pbVar5;
    *(undefined1 *)(param_1 + 0x12) = 0;
    uVar4 = *DAT_080fea4c * DAT_080fea50 + DAT_080fea54;
    *DAT_080fea4c = uVar4 & 0x7fffffff;
    *(char *)(param_1 + 0x13) = (char)(uVar4 >> 0x10);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
    local_1c = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(int *)(param_1 + 0x58) + DAT_080fea58;
    FUN_080e1b14(&local_1c,(*(byte *)(param_1 + 0x12) >> 2) * '8' + *(char *)(param_1 + 0x13),0x100)
    ;
    FUN_080d4c8c(param_1 + 0x54,(uint)(*(byte *)(param_1 + 0x12) >> 2) * 0x1c + DAT_080fea5c,0,
                 *(byte *)(param_1 + 10) & 0x10);
    FUN_08002b10(0xa6);
  }
  bVar2 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar2;
  if (0x10 < bVar2) {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080fea60);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0x10);
  }
  return in_lr;
}


