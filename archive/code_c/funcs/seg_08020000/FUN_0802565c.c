// undefined FUN_0802565c(void)
// entry 0x802565c


longlong FUN_0802565c(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  uint in_lr;
  longlong lVar10;
  
  pbVar4 = DAT_08025d04;
  iVar3 = DAT_08025d00;
  iVar2 = DAT_080256d0;
  iVar8 = *(int *)(param_1 + 0x20);
  pcVar9 = (char *)(param_1 + 0x17c);
  cVar5 = *pcVar9;
  if (cVar5 == '\0') {
    uVar1 = *(ushort *)(DAT_080256d0 + 8);
    *(ushort *)(DAT_080256d0 + 8) = uVar1 | 1;
    iVar3 = DAT_080256d4;
    bVar6 = *(byte *)(DAT_080256d4 + 4) & 0xf7;
    *(byte *)(DAT_080256d4 + 4) = bVar6;
    cVar5 = *(char *)(iVar2 + 2);
    if (cVar5 == '\0') {
      *(byte *)(iVar3 + 0xd) = *(byte *)(iVar3 + 0xd) & 0xc3;
      *(undefined2 *)(iVar2 + 10) = 0;
      FUN_080275f0(iVar2 + 0x10,**(undefined4 **)(DAT_080256d8 + 0x38));
      FUN_0801f63c(1);
      *pcVar9 = '\x01';
      goto LAB_08025cee;
    }
    if (cVar5 != '\x01') {
      if (cVar5 == '\x02') {
        uVar7 = *(byte *)(iVar2 + 0x188) + 0x4a;
        if (((int)(uint)*(byte *)(((int)uVar7 >> 3) + iVar3 + 4) >> (uVar7 & 7) & 1U) != 0) {
          *(ushort *)(iVar2 + 10) = *(byte *)(iVar2 + 0x188) + 1;
        }
        FUN_080275f0(iVar2 + 0x10,
                     *(undefined4 *)
                      ((uint)*(ushort *)(iVar2 + 10) * 4 + *(int *)(DAT_08025748 + 0x38) + 8));
        *(byte *)(iVar3 + 4) = *(byte *)(iVar3 + 4) & 0xf7;
        *pcVar9 = '\x02';
        goto LAB_08025cee;
      }
      if (cVar5 == '\x03') {
        FUN_080275f0(iVar2 + 0x10,
                     *(undefined4 *)
                      ((uint)*(ushort *)(iVar2 + 10) * 4 + *(int *)(DAT_08025774 + 0x38) + 8));
        *(byte *)(iVar3 + 4) = *(byte *)(iVar3 + 4) & 0xf7;
        *pcVar9 = '\x05';
        goto LAB_08025cee;
      }
      if (cVar5 != '\x04') {
        if (cVar5 == '\x05') {
          *(ushort *)(iVar2 + 8) = (uVar1 | 5) & (ushort)DAT_080257b4;
          *pcVar9 = '\b';
        }
        goto LAB_08025cee;
      }
      *(byte *)(iVar3 + 4) = bVar6 | 8;
      FUN_080275f0(iVar2 + 0x10,*(undefined4 *)(*(int *)(DAT_08025794 + 0x38) + 0x24));
      goto LAB_08025c08;
    }
    FUN_080275f0(iVar2 + 0x10,*(undefined4 *)(*(int *)(DAT_080256f8 + 0x38) + 4));
    FUN_0801f63c(2);
  }
  else {
    if (cVar5 != '\x01') {
      if (cVar5 == '\x02') {
        if (*(byte *)(param_1 + DAT_080257f8) < 5) {
                    /* WARNING: Could not recover jumptable at 0x080257f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar10 = (**(code **)(PTR_PTR_080257fc + (uint)*(byte *)(param_1 + DAT_080257f8) * 4))();
          return lVar10;
        }
        goto LAB_08025cee;
      }
      if (cVar5 == '\x03') {
        FUN_0801f63c(2);
        *pcVar9 = '\x04';
        goto LAB_08025cee;
      }
      if ((((cVar5 != '\x04') || (*(int *)(iVar8 + 0x54) < 0xd2001)) ||
          (DAT_08025c10 < *(int *)(iVar8 + 0x54))) ||
         ((*(int *)(iVar8 + 0x58) < 0x5a001 || (DAT_08025c14 < *(int *)(iVar8 + 0x58))))) {
        if ((((*(char *)(param_1 + 0x17c) == '\x05') &&
             ((0xd2000 < *(int *)(iVar8 + 0x54) && (*(int *)(iVar8 + 0x54) <= DAT_08025c74)))) &&
            (0x5a000 < *(int *)(iVar8 + 0x58))) && (*(int *)(iVar8 + 0x58) <= DAT_08025c78)) {
          *(byte *)(DAT_08025c7c + 4) = *(byte *)(DAT_08025c7c + 4) | 8;
          FUN_080275f0(DAT_08025c80,*(undefined4 *)(*(int *)(DAT_08025c84 + 0x38) + 0x20));
          FUN_0801f63c(4);
          *(char *)(param_1 + 0x17c) = '\x06';
        }
        else {
          cVar5 = *(char *)(param_1 + 0x17c);
          if (cVar5 == '\x06') {
            FUN_0801f63c(3);
            cVar5 = '\a';
          }
          else {
            if ((cVar5 != '\a') || ((*(ushort *)(DAT_08025d00 + 8) & 0x10) == 0)) goto LAB_08025cee;
            *DAT_08025d04 = *DAT_08025d04 | 0x80;
            pbVar4[1] = pbVar4[1] | 2;
            FUN_080275f0(iVar3 + 0x10,*(undefined4 *)(*(int *)(DAT_08025d08 + 0x38) + 0x28));
            uVar1 = (ushort)DAT_08025d0c;
            *(byte *)(iVar3 + 0x12) = *(byte *)(iVar3 + 0x12) & 0xfd;
            *(ushort *)(iVar3 + 8) = uVar1 & *(ushort *)(iVar3 + 8) | 4;
            FUN_0801f63c(5);
            cVar5 = '\b';
          }
          *(char *)(param_1 + 0x17c) = cVar5;
        }
        goto LAB_08025cee;
      }
      *(byte *)(DAT_08025c18 + 4) = *(byte *)(DAT_08025c18 + 4) | 8;
      FUN_080275f0(DAT_08025c1c,*(undefined4 *)(*(int *)(DAT_08025c20 + 0x38) + 0x1c));
      FUN_0801f63c(4);
LAB_08025c08:
      *pcVar9 = '\x06';
      goto LAB_08025cee;
    }
    FUN_0801f63c(2);
    *(undefined1 *)(DAT_080257d4 + 0x188) = 0;
  }
  *pcVar9 = '\x02';
LAB_08025cee:
  return (ulonglong)in_lr << 0x20;
}


