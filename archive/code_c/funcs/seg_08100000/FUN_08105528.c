// undefined FUN_08105528(void)
// entry 0x8105528


undefined4 FUN_08105528(int param_1)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  byte bVar8;
  undefined4 in_lr;
  int local_30;
  int local_2c;
  byte *local_28;
  char *local_24;
  
  puVar1 = DAT_08105690;
  if (*(char *)(param_1 + 0xb4) == '\x01') {
    local_24 = (char *)(param_1 + 0xb6);
    if (*local_24 == '\0') {
      iVar7 = *(int *)(param_1 + 0x28);
      local_30 = *(int *)(iVar7 + DAT_08105688) + DAT_0810568c;
      local_2c = ((int *)(iVar7 + DAT_08105688))[1];
      bVar8 = 0;
      local_28 = (byte *)(param_1 + 0xb5);
      do {
        uVar3 = *puVar1 * DAT_08105694 + DAT_08105698;
        *puVar1 = uVar3 & 0x7fffffff;
        iVar7 = iVar7 + DAT_0810569c;
        cVar2 = FUN_08129198((uVar3 & 0x7fffffff) >> 0x10,5 - *(int *)(iVar7 + 0x28));
        iVar5 = DAT_0810569c;
        cVar4 = '\0';
        uVar3 = 0;
        bVar8 = bVar8 + 1;
        if (cVar2 != -1) {
          do {
            if ((1 << uVar3 & *(uint *)(iVar7 + 0x24)) == 0) {
              cVar4 = cVar4 + '\x01';
            }
            uVar3 = uVar3 + 1 & 0xff;
          } while (cVar4 != (char)(cVar2 + '\x01'));
        }
        iVar7 = *(int *)(param_1 + 0x28) + DAT_0810569c;
        *(uint *)(iVar7 + 0x24) = *(uint *)(iVar7 + 0x24) | 1 << (uVar3 - 1 & 0xff);
        FUN_081050dc(&local_30,
                     (uint)*(byte *)(*(int *)(iVar7 + 0x28) + (uint)*local_28 * 5 + DAT_081056a0) |
                     (uVar3 - 1) * 0x100 & 0xffff);
        if (*(int *)(*(int *)(param_1 + 0x28) + iVar5 + 0x28) == 0) {
          FUN_08002b10(DAT_081056a4);
        }
        iVar7 = *(int *)(param_1 + 0x28);
        iVar5 = iVar7 + iVar5;
        *(int *)(iVar5 + 0x28) = *(int *)(iVar5 + 0x28) + 1;
      } while (bVar8 < 5);
      *local_24 = '\x01';
    }
    if (*(int *)(*(int *)(param_1 + 0x28) + DAT_0810569c + 0x24) == 0) {
      *(undefined1 *)(param_1 + 0xb4) = 0;
      *local_24 = '\0';
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      FUN_08005760(param_1 + 0x74,DAT_081056a8,param_1 + 0x54,0x80);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = DAT_081056ac;
      FUN_0801cf00(param_1,0xa900);
      pbVar6 = (byte *)(param_1 + 0xb5);
      bVar8 = *pbVar6;
      *pbVar6 = bVar8 + 1;
      if (3 < (byte)(bVar8 + 1)) {
        *pbVar6 = 0;
      }
    }
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


