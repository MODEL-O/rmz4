// undefined FUN_0810330c(void)
// entry 0x810330c


undefined4 FUN_0810330c(int param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  undefined4 in_lr;
  
  uVar3 = FUN_08129120(*(undefined1 *)(param_1 + 0xb5),0x18);
  if (*(char *)(param_1 + 0x10) == '\0') {
    sVar4 = (ushort)*(byte *)(param_1 + 0xb4) + (uVar3 & 0xff);
  }
  else {
    sVar4 = (ushort)*(byte *)(param_1 + 0xb4) - (uVar3 & 0xff);
  }
  pbVar6 = (byte *)(param_1 + 0xb4);
  iVar7 = (int)sVar4;
  if (iVar7 < 0) {
    iVar7 = -iVar7;
  }
  iVar5 = iVar7;
  if (iVar7 < 0) {
    iVar5 = iVar7 + 3;
  }
  *pbVar6 = *(byte *)(iVar7 + (iVar5 >> 2) * -4 + (uint)*(byte *)(param_1 + 0x10) * 4 + DAT_081033a0
                     );
  pbVar8 = (byte *)(param_1 + 0xb5);
  bVar1 = FUN_08129198(*pbVar8,0x18);
  *pbVar8 = bVar1;
  if (bVar1 < 4) {
    if (bVar1 < 2) {
      FUN_0801cfc8(param_1,*(undefined2 *)((uint)*pbVar6 * 4 + DAT_081033a4),0,*pbVar8 + 1);
    }
    else {
      FUN_0801cfc8(param_1,*(undefined2 *)((uint)*pbVar6 * 4 + DAT_081033c8),1,*pbVar8 - 1);
    }
    cVar2 = '\x01';
  }
  else if (bVar1 < 0x15) {
    *pbVar8 = bVar1 - 4;
    iVar7 = DAT_0810346c;
    bVar1 = *pbVar8 >> 1;
    if (3 < bVar1) {
      bVar1 = bVar1 & 3;
    }
    FUN_0801cfc8(param_1,*(undefined2 *)((uint)*pbVar6 * 4 + DAT_0810346c),bVar1 + 2,
                 (*pbVar8 & 1) + 1);
    *(byte *)(param_1 + 0x12) = '\x11' - *pbVar8;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,(uint)*pbVar6 * 0x18 + DAT_08103470,param_1 + 0x54,0x80);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined1 *)(param_1 + 0xe) = 2;
    if (*(char *)(param_1 + 0x12) != '\0') goto LAB_081034da;
    FUN_0801cf00(param_1,*(undefined2 *)((uint)*pbVar6 * 4 + iVar7 + 2));
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined1 *)(param_1 + 0x12) = 0xff;
    cVar2 = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    *pbVar8 = bVar1 - 0x15;
    if ((byte)(bVar1 - 0x15) < 2) {
      FUN_0801cfc8(param_1,*(undefined2 *)((uint)*pbVar6 * 4 + DAT_081034a0 + 2),0,*pbVar8 + 1);
    }
    else {
      FUN_0801cfc8(param_1,*(undefined2 *)((uint)*pbVar6 * 4 + DAT_081034ec + 2),0,1);
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined1 *)(param_1 + 0x12) = 0xff;
    cVar2 = '\x03';
  }
  *(char *)(param_1 + 0xe) = cVar2;
LAB_081034da:
  *pbVar8 = 0;
  return in_lr;
}


