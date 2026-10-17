// undefined FUN_080230d0(void)
// entry 0x80230d0


longlong FUN_080230d0(int param_1)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  int iVar11;
  char *pcVar12;
  uint in_lr;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar8 = DAT_080233cc;
  pbVar7 = DAT_0802332c;
  pbVar6 = DAT_080232fc;
  iVar5 = DAT_080232f8;
  iVar4 = DAT_08023158;
  iVar11 = *(int *)(param_1 + 0x20);
  pcVar12 = (char *)(param_1 + 0x17c);
  if (*pcVar12 == '\0') {
    local_1c = 0;
    local_18 = 0;
    *(ushort *)(DAT_08023158 + 8) = *(ushort *)(DAT_08023158 + 8) | 1;
    iVar5 = DAT_0802315c;
    *(byte *)(DAT_0802315c + 4) = *(byte *)(DAT_0802315c + 4) | 8;
    uVar10 = FUN_080f7558(&local_1c,0,0);
    *(undefined4 *)(param_1 + 0x284) = uVar10;
    cVar1 = *(char *)(iVar4 + 2);
    if (cVar1 == '\0') {
      FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_08023160 + 0x1c) + 0x38));
      FUN_0801f63c(2);
      *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) & 0xf;
      *(byte *)(DAT_08023164 + 6) = *(byte *)(DAT_08023164 + 6) & 0xf;
      *pcVar12 = '\x02';
    }
    else if (cVar1 == '\x02') {
      FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_08023180 + 0x1c) + 8));
      *pcVar12 = '\x02';
    }
    else if (cVar1 == '\x03') {
      FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_080231a4 + 0x1c) + 0x10));
      FUN_0801f63c(4);
      *pcVar12 = '\x04';
    }
    else if (cVar1 == '\x04') {
      FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_080231c0 + 0x1c) + 0x18));
      *pcVar12 = '\x05';
    }
    else if (cVar1 == '\x05') {
      FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_080231e0 + 0x1c) + 0x20));
      *pcVar12 = '\t';
    }
  }
  else if (((*pcVar12 == '\x02') && (0x78000 < *(int *)(iVar11 + 0x54))) &&
          (*(int *)(iVar11 + 0x54) <= DAT_08023200)) {
    *pcVar12 = '\x03';
  }
  else {
    if ((*(char *)(param_1 + 0x17c) == '\x03') && (0x87000 < *(int *)(iVar11 + 0x54))) {
      FUN_080275f0(DAT_0802323c,*(undefined4 *)(*(int *)(DAT_08023240 + 0x1c) + 0x14));
      FUN_0801f63c(4);
      *(byte *)(DAT_08023244 + 4) = *(byte *)(DAT_08023244 + 4) | 8;
      uVar9 = 5;
    }
    else if ((*(char *)(param_1 + 0x17c) == '\x04') && (0x87000 < *(int *)(iVar11 + 0x54))) {
      FUN_080275f0(DAT_08023280,*(undefined4 *)(*(int *)(DAT_08023284 + 0x1c) + 0x14));
      FUN_0801f63c(4);
      *(byte *)(DAT_08023288 + 4) = *(byte *)(DAT_08023288 + 4) | 8;
      uVar9 = 5;
    }
    else {
      pcVar12 = (char *)(param_1 + 0x17c);
      if (*pcVar12 == '\x05') {
        FUN_0801f63c(3);
        *pcVar12 = '\x06';
        goto LAB_080233c2;
      }
      if ((*pcVar12 == '\x06') && ((*(ushort *)(DAT_080232f8 + 8) & 0x10) != 0)) {
        *DAT_080232fc = *DAT_080232fc | 0x80;
        pbVar6[1] = pbVar6[1] | 2;
        FUN_080275f0(iVar5 + 0x10,*(undefined4 *)(*(int *)(DAT_08023300 + 0x1c) + 0x1c));
        uVar2 = *(ushort *)(iVar5 + 8);
        uVar3 = (ushort)DAT_08023304;
        *(byte *)(iVar5 + 0x12) = *(byte *)(iVar5 + 0x12) & 0xfd;
        *(byte *)(DAT_08023308 + 4) = *(byte *)(DAT_08023308 + 4) & 0xf7;
        *(ushort *)(iVar5 + 8) = uVar3 & uVar2 | 1;
        *pcVar12 = '\a';
        goto LAB_080233c2;
      }
      if (*(char *)(param_1 + 0x17c) == '\a') {
        *DAT_0802332c = *DAT_0802332c & 0x7f;
        pbVar7[1] = 0;
        uVar9 = 8;
      }
      else if ((*(char *)(param_1 + 0x17c) == '\b') && (0x96000 < *(int *)(iVar11 + 0x54))) {
        *(undefined1 *)(DAT_0802335c + DAT_08023360) = 0xff;
        FUN_0801f63c(5);
        *(byte *)(DAT_08023364 + 4) = *(byte *)(DAT_08023364 + 4) | 8;
        uVar9 = 9;
      }
      else if (*(char *)(param_1 + 0x17c) == '\t') {
        if ((DAT_08023390 < (uint)(*(int *)(iVar11 + 0x54) + DAT_0802338c)) ||
           (DAT_08023394 < *(int *)(iVar11 + 0x58))) goto LAB_080233c2;
        uVar9 = 10;
      }
      else {
        if ((*(char *)(param_1 + 0x17c) != '\n') || (*(int *)(iVar11 + 0x54) < 0x88001))
        goto LAB_080233c2;
        FUN_080275f0(DAT_080233cc,*(undefined4 *)(*(int *)(DAT_080233d0 + 0x1c) + 0x3c));
        *(ushort *)(iVar8 + -8) = (ushort)DAT_080233d4 & *(ushort *)(iVar8 + -8);
        uVar9 = 0xc;
      }
    }
    *(undefined1 *)(param_1 + 0x17c) = uVar9;
  }
LAB_080233c2:
  return (ulonglong)in_lr << 0x20;
}


