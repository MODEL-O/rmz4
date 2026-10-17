// undefined FUN_08022248(void)
// entry 0x8022248


longlong FUN_08022248(int param_1)

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
  int iVar10;
  char *pcVar11;
  uint in_lr;
  
  iVar8 = DAT_08022524;
  pbVar7 = DAT_0802247c;
  pbVar6 = DAT_0802244c;
  iVar5 = DAT_08022448;
  iVar4 = DAT_080222e0;
  iVar10 = *(int *)(param_1 + 0x20);
  pcVar11 = (char *)(param_1 + 0x17c);
  if (*pcVar11 == '\0') {
    *(ushort *)(DAT_080222e0 + 8) = *(ushort *)(DAT_080222e0 + 8) | 1;
    iVar5 = DAT_080222e4;
    *(byte *)(DAT_080222e4 + 4) = *(byte *)(DAT_080222e4 + 4) | 8;
    cVar1 = *(char *)(iVar4 + 2);
    if (cVar1 == '\0') {
      FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_080222e8 + 0x14) + 0x38));
      FUN_0801f63c(2);
      *(byte *)(iVar5 + 9) = *(byte *)(iVar5 + 9) & 0x3f;
      *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) & 0xf0;
      iVar4 = DAT_080222ec;
      *(byte *)(DAT_080222ec + 5) = *(byte *)(DAT_080222ec + 5) & 0x3f;
      *(byte *)(iVar4 + 6) = *(byte *)(iVar4 + 6) & 0xf0;
      *pcVar11 = '\x02';
    }
    else if (cVar1 == '\x02') {
      FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_08022308 + 0x14) + 8));
      *pcVar11 = '\x02';
    }
    else if (cVar1 == '\x03') {
      FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_0802232c + 0x14) + 0x10));
      FUN_0801f63c(4);
      *pcVar11 = '\x04';
    }
    else if (cVar1 == '\x04') {
      FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_08022348 + 0x14) + 0x18));
      *pcVar11 = '\x05';
    }
    else if (cVar1 == '\x05') {
      FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_08022368 + 0x14) + 0x20));
      *pcVar11 = '\t';
    }
  }
  else if ((*pcVar11 == '\x02') && (DAT_08022380 < *(int *)(iVar10 + 0x54))) {
    *pcVar11 = '\x03';
  }
  else if (((*(char *)(param_1 + 0x17c) == '\x03') && (0x186000 < *(int *)(iVar10 + 0x54))) ||
          ((*(char *)(param_1 + 0x17c) == '\x04' && (0x186000 < *(int *)(iVar10 + 0x54))))) {
    FUN_080275f0(DAT_080223d4,*(undefined4 *)(*(int *)(DAT_080223d8 + 0x14) + 0x14));
    FUN_0801f63c(4);
    *(byte *)(DAT_080223dc + 4) = *(byte *)(DAT_080223dc + 4) | 8;
    *(undefined1 *)(param_1 + 0x17c) = 5;
  }
  else {
    if (*(char *)(param_1 + 0x17c) == '\x05') {
      FUN_0801f63c(3);
      uVar9 = 6;
    }
    else if ((*(char *)(param_1 + 0x17c) == '\x06') && ((*(ushort *)(DAT_08022448 + 8) & 0x10) != 0)
            ) {
      *DAT_0802244c = *DAT_0802244c | 0x80;
      pbVar6[1] = pbVar6[1] | 2;
      FUN_080275f0(iVar5 + 0x10,*(undefined4 *)(*(int *)(DAT_08022450 + 0x14) + 0x1c));
      uVar2 = *(ushort *)(iVar5 + 8);
      uVar3 = (ushort)DAT_08022454;
      *(byte *)(iVar5 + 0x12) = *(byte *)(iVar5 + 0x12) & 0xfd;
      *(byte *)(DAT_08022458 + 4) = *(byte *)(DAT_08022458 + 4) & 0xf7;
      *(ushort *)(iVar5 + 8) = uVar3 & uVar2 | 1;
      uVar9 = 7;
    }
    else {
      pcVar11 = (char *)(param_1 + 0x17c);
      if (*pcVar11 == '\a') {
        *DAT_0802247c = *DAT_0802247c & 0x7f;
        pbVar7[1] = 0;
        *pcVar11 = '\b';
        goto LAB_08022510;
      }
      if ((*pcVar11 == '\b') && (DAT_080224a4 < *(int *)(iVar10 + 0x54))) {
        FUN_0801f63c(5);
        *(byte *)(DAT_080224a8 + 4) = *(byte *)(DAT_080224a8 + 4) | 8;
        *pcVar11 = '\t';
        goto LAB_08022510;
      }
      if (*(char *)(param_1 + 0x17c) == '\t') {
        if (DAT_080224dc < *(int *)(iVar10 + 0x54)) {
          *(byte *)(DAT_080224e0 + 1) = *(byte *)(DAT_080224e0 + 1) | 2;
        }
        if (*(int *)(iVar10 + 0x54) <= DAT_080224e4) goto LAB_08022510;
        *(undefined1 *)(DAT_080224e0 + 1) = 0;
        uVar9 = 10;
      }
      else {
        if ((*(char *)(param_1 + 0x17c) != '\n') || (*(int *)(iVar10 + 0x54) <= DAT_08022520))
        goto LAB_08022510;
        FUN_080275f0(DAT_08022524,*(undefined4 *)(*(int *)(DAT_08022528 + 0x14) + 0x3c));
        *(ushort *)(iVar8 + -8) = (ushort)DAT_0802252c & *(ushort *)(iVar8 + -8);
        uVar9 = 0xc;
      }
    }
    *(undefined1 *)(param_1 + 0x17c) = uVar9;
  }
LAB_08022510:
  return (ulonglong)in_lr << 0x20;
}


